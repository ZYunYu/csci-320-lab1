#include <stdio.h>
#include <stdlib.h>
#include "lab1.h"

char* allocateString() {
    char* str = (char*)malloc(sizeof(char) * MAX_LINE_LEN);
    return str;
}

char* readString(char* fileName) {
    char* str = allocateString();
    FILE* file = fopen(fileName, "r");
    fgets(str, MAX_LINE_LEN, file);
    fclose(file);
    return str;
}

char* mysteryExplode(const char* str) {
    char* explodedString = allocateString();
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            explodedString[j] = str[i];
            j++;
        }
        i++;
    }
    explodedString[j] = '\0';
    return explodedString;
}