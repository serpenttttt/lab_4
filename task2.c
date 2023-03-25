#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*int to_dec(char string[], int length) {         есть в task1.c
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
}*/

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

/*
int task2() {
    char *string;
    int capacity = 2;
    char input;
    string = (char *) malloc(sizeof(char) * capacity); // выделение памяти под массив
    puts("Input hex.");
    int i = 0; // length
    while ((input = getchar()) != '\n') {
        if (i >= (capacity - 1)) {
            capacity = capacity * 2; // расширение массива
            string = (char *) realloc(string, capacity);
        }
        string[i] = input;
        ++i;
    }
    string[i] = '\0';
    int dec = 0;
    dec = to_dec(string, i);
    int bin = to_bin(dec); // число в двоичной системе
    int amount = count_uneven(bin);
    printf("%d - the number of odd bits.", amount);
    return 0;
}*/
