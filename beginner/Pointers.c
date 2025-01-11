// Pointer.c

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>

int main(){
    char str[32];
    char *p;

    strncpy(str, "I like apples !", 31);
    p = str;

    printf("%s \n", p);
    printf("%c \n", *p);

    return 0;
}