#include <stdio.h>
#include <stdlib.h>
#include "lab4.h"

int main() {
    puts("Task1");
    char *string, *string1; // указатель на массив
    int capacity = 2;
    string = (char *) malloc(sizeof(char) * capacity); // выделение памяти под массив
    char input;
    puts("Input hex.");
    int i; // length
    for (i = 0; (input = getchar()) != '\n'; ++i) {
        if (i >= (capacity - 1)) {
            capacity = capacity * 2; // расширение массива
            string = (char *) realloc(string, capacity);
        }
        string[i] = input;
    }
    string[i + 1] = '\0';
    int summ = to_dec(string, i);
    puts("Num 10:");
    printf("%d", summ);
    free(string);


    puts("\nTask2");
    string1 = (char *) malloc(sizeof(char) * capacity); // выделение памяти под массив
    puts("Input hex.");
    i = 0; // length
    for (i = 0; (input = getchar()) != '\n'; ++i) {
        if (i >= (capacity - 1)) {
            capacity = capacity * 2; // расширение массива
            string1 = (char *) realloc(string1, capacity);
        }
        string1[i] = input;
    }
    string1[i + 1] = '\0';
    int dec = to_dec(string1, i);
    printf("%d - the number of odd bits.", count_uneven(dec));
    free(string1);
    return 0;
}