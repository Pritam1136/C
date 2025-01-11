// if.c
#include<stdio.h>

int main(){
    int speed;

    printf("How fast are you going(km/h) 
    3?\n");
    scanf("%d", &speed);

    if(speed > 100){
        printf("Slow down!\n");
    } else if(speed < 20){
        printf("Speed up!\n");
    } else if(speed > 20 && speed < 100){
        printf("You are driving at a safe speed\n");
    }
}