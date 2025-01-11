// triangle.h

#include<stdio.h>

int area_Triangle(int b, int h){
    int area;
    area =  (b * h)/2;
    return area;
}

int main(){
    int b, h, area;

    printf("Base: ");
    fflush(stdout);
    scanf("%d", &b);

    printf("Height: ");
    fflush(stdout);
    scanf("%d", &h);

    area = area_Triangle(b,h);
    printf("The area of the triangle is: %d", area);

    return 0;
}