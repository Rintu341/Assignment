#include <stdio.h>

int main(){
    float base,hight;
    printf("Enter Base and then enter hight\n");
    scanf("%f %f",&base,&hight);
    float Area =(base*hight)/2;
    printf("Area of triangle = %f",Area);
    return 0;
}