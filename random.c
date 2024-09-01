#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    int number = rand() % 26;
    char letter = 'A' + number;
    return letter;
}