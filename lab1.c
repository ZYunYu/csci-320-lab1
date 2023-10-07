#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    int len = strlen(str);
    char* explodedString = allocateString();
    int i, j, k = 0;
    for (i = 0; i < len; i++) {
        for (j = 0; j <= i-1; j++) {
            explodedString[k++] = str[j];
        }
    }
    explodedString[k] = '\0';
    return explodedString;
}
