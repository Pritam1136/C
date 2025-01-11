// ambersand.c

#include <stdio.h>

#define F fflush(stdout)

void addition(int *target, int a, int b){
    *target = a + b;
}

int main(){
    int a, b, answer;
    
    printf("Enter first number:"); F;
    scanf("%d", &a);

    printf("Enter second number:"); F;
    scanf("%d", &b);

    addition(&answer, a, b);
    printf("Sum = %d\n", answer);

    return 0;
}