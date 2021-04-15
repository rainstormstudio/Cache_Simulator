#ifndef CACHE_H
#define CACHE_H

#include <QtCore>

class Cache
{
public:
    struct Sect {
      int index = 0;
      QString tag;
      int data = 0;
    };
private:
    QVector<QVector<Sect>> _cache;
    int _nAddrBits;
    int _nBits;
    int _nWays;
    int _nHits;
    int _nMisses;
public:
    Cache(int nAddrBits, int size, int nWays);

    int hits() const { return _nHits; }
    int misses() const { return _nMisses; }
    int addrBits() const { return _nAddrBits; }
    int bits() const { return _nBits; }
    int ways() const { return _nWays; }
    QVector<QVector<Sect>> data() { return _cache; }

    Sect* loadAddr(int addr);

    void setNBits(int nBits) { _nBits = nBits; }
    void setNWays(int nWays) { _nWays = nWays; }

    void reset();
    void reset(int nAddrBits, int size, int nWays);
};

#endif // CACHE_H
