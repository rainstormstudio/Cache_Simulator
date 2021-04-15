#include "helper.h"

QString Helper::toBinary(int v, int w) {
    QString binary;
    binary.setNum(v, 2);
    int n = binary.length();
    for (int i = 0; i < w - n; i ++) {
        binary = "0" + binary;
    }
    return binary;
}
