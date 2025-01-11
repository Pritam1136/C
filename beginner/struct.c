//  struct.c

#include <stdio.h>
#include <string.h>

struct person {
    char title[8];
    char lastname[32];
    int age;
};

int main() {
    struct person birch;
    strncpy(birch.title, "doctor", 7);
    strncpy(birch.lastname, "Birch", 31);
    birch.age = 30;
    printf("Title: %s\n", birch.title);
    printf("Lastname: %s\n", birch.lastname);
    printf("Age: %d\n", birch.age);
    return 0;
}