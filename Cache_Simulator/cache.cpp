#include "cache.h"
#include "helper.h"

Cache::Cache(int nAddrBits, int size, int nWays)
{
    _nAddrBits = nAddrBits;
    _nWays = nWays;
    _nHits = 0;
    _nMisses = 0;
    _cache = QVector<QVector<Sect>>(size / _nWays);
    _nBits = (int)round(log2(_cache.size()));
    for (int i = 0; i < _cache.size(); i ++) {
        _cache[i] = QVector<Sect>();
    }
}

Cache::Sect* Cache::loadAddr(int addr) {
    QString bAddr = Helper::toBinary(addr, _nAddrBits);
    int data = addr;
    QString tag = bAddr.mid(0, _nAddrBits - (int)round(log2(_cache.size())));
    bool hit = false;
    Sect* ans = nullptr;
    int set = addr % _cache.size();
    for (int i = 0; i < _cache[set].size(); i ++) {
        if (_cache[set][i].tag == tag) {
            hit = true;
            ans = &(_cache[set][i]);
            _cache[set].move(i, 0);
            break;
        }
    }
    if (hit) {
        _nHits ++;
    } else {
        _nMisses ++;
        Sect sect;
        sect.index = 0;
        sect.tag = tag;
        sect.data = data;
        if (_cache[set].size() < _nWays) {
            sect.index = _cache[set].size();
        } else {
            sect.index = _cache[set][_cache[set].size() - 1].index;
            _cache[set].pop_back();
        }
        _cache[set].insert(_cache[set].begin(), sect);
    }
    return ans;
}

void Cache::reset() {
    _nHits = 0;
    _nMisses = 0;
    for (int i = 0; i < _cache.size(); i ++) {
        _cache[i].clear();
    }
}

void Cache::reset(int nAddrBits, int size, int nWays) {
    _nAddrBits = nAddrBits;
    _nWays = nWays;
    _nHits = 0;
    _nMisses = 0;
    _cache.resize(size / _nWays);
    _nBits = (int)round(log2(_cache.size()));
    for (int i = 0; i < _cache.size(); i ++) {
        _cache[i].clear();
    }
}
