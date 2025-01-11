// number.c
#include<stdio.h>
int main(){
    int number1;
    int number2;
    printf("Enter a number 1: ");
    scanf("%d", &number1);
    printf("Enter a number 2: ");
    scanf("%d", &number2);
    printf("The sum of %d and %d is %d\n", number1, number2, number1 + number2);
    return 0;
}