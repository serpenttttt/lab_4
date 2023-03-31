#include <math.h>

// функция для перевода числа в двоичную систему
int to_bin (int dec) {
    int bin = 0;
    int i;
    for (i = 0; (dec / 2) >= 1; ++i) {
        bin = bin + pow(10, i)*(dec % 2);
        dec /= 2;
    }
    bin = bin + dec * pow(10, i);
    return bin;
}

// функция для подсчета количества установленных нечетных бит в числе.
int count_uneven(int bin) {
    int count = 0;
    int j = 0;
    for(j = 0; (bin / 10) >= 1; ++j) {
        if (bin % 10 == 1 && j % 2 == 0) {
            count += 1;
        }
        bin /= 10;
    }
    if (bin % 10 == 1 && j % 2 == 0) {
        count += 1;
    }
    return count;
}
