#include <math.h>
#include <stdio.h>

// функция для перевода числа в десятичную систему
int to_dec(char string[], int length) {
    int buffer = 0;
    int summ = 0;
    for (int j = 0; j < (length); ++j) {
        if (string[length - 1 - j] >= 'A' && string[length - 1 - j] <= 'F') {     // обработка A-F
            buffer = string[length - j - 1] - 'A' + 10;
            summ = summ + buffer * pow(16, j);
        }
        if (string[length - 1 - j] >= 'a' && string[length - 1 - j] <= 'f') {     // обработка a-f
            buffer = string[length - j - 1] - 'a' + 10;
            summ = summ + buffer * pow(16, j);
        }
        if (string[length - 1 - j] >= '0' && string[length - 1 - j] <= '9') {       // обработка цифр
            buffer = string[length - j - 1] - '0';
            summ = summ + buffer * pow(16, j);
        }
    }
    return summ;
}
