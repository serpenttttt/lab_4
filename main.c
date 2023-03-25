#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

int main() {
    puts("Task1");
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
    free(string);


    puts("\nTask2");
    string = (char *) malloc(sizeof(char) * capacity); // выделение памяти под массив
    puts("Input hex.");
    i = 0; // length
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
    printf("%d - the number of odd bits.", count_uneven(bin));
    free(string);
    return 0;
}