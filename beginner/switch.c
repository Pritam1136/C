// switch.c

#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    switch (x) {
        case 1:
            printf("You entered one.\n");
            break;
        case 2:
            printf("You entered two.\n");
            break;
        case 3:
            printf("You entered three.\n");
            break;
        default:
            printf("You entered something else.\n");
            break;
    }
}