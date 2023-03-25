/*
 * Пользователь вводит в консоли целое число в шестнадцатеричном формате.
 * Напишите программу, которая преобразует строку в число.
 * Перевод строки в число необходимо оформить в виде функции.
 * Допустимые символы: 0-9, a-f, A-F.
 */

/*#include <stdio.h>
#include <stdlib.h>*/
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

/*int task1() {
    char *string; // указатель на массив
    int capacity = 2;
    string = (char *) malloc(sizeof(char) * capacity); // выделение памяти под массив
    char input;
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
    int summ = to_dec(string, i);
    puts("Num 10:");
    printf("%d", summ);
    return 0;
}*/
