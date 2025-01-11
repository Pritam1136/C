// for.c

#include <stdio.h>

#define F fflush(stdout)

int main(){
    int i, n;

    printf("Enter the number to find the multiplication table: ");
    F;
    scanf("%d", &n);

    for(i = 1; i <= 10; i++){
        printf("i = %d\n", i*n);
    }

    return 0;
}