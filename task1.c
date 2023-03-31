#include <math.h>

// функция для перевода числа в десятичную систему
int to_dec(char string[], int length) {
    int buffer = 0;
    int summ = 0;
    for (int j = 0; j < (length); ++j) {
        if ((string[length - 1 - j] - '0') >= 17 && (string[length - 1 - j] - '0') <= 22) {     // обработка A-F
            buffer = (string[length - j - 1] - '0') - 7;
            summ = summ + buffer * pow(16, j);
        }
        if ((string[length - 1 - j] - '0') >= 49 && (string[length - 1 - j] - '0') <= 54) {     // обработка a-f
            buffer = (string[length - j - 1] - '0') - 39;
            summ = summ + buffer * pow(16, j);
        }
        if ((string[length - 1 - j] - '0') >= 1 && (string[length - 1 - j] - '0') <= 9) {       // обработка цифр
            buffer = (string[length - j - 1] - '0');
            summ = summ + buffer * pow(16, j);
        }
    }
    return summ;
}
