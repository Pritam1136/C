// while.c
#include<stdio.h>

int main(){
    int d, s = 0;
    printf("Enter a number\n");
    scanf("%d", &d);
    while(d > 0){
        s = s + (d%10);
        printf("Sum = %d\n", s);
        d = d/10;
    }
}