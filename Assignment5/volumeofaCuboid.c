#include <stdio.h>

int main(){
    float Length,Width,Hight;
    printf("Enter In Sequence  1st Length ,2nd Width ,3rd hight\n");
    scanf("%f %f %f",&Length,&Width,&Hight);
    printf("Volume of a Cuboid = %lf",Length*Width*Hight);
    return 0;
}