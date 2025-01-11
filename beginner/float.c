#include<stdio.h>

int main(){
    float pi, r, answer;
    pi = 3.14159;

    printf("What is the radius in centimenters\n");
    scanf("%f", &r);
    answer = pi * r * r;

    printf("The area of the circle is %f\n", answer);
}

  /*
    %s = (text) string
    %d = integer
    %f = float
    %c = character
    */