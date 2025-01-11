// name.c
#include <stdio.h> // include the standard input/output library

int main(){
    char name[32];
    printf("What is your name?\n");
    scanf("%s", name);
    printf("Hello,!\n", name);
    return 0;
}