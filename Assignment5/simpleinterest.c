#include <stdio.h>

int main(){
    int p=1000,time;
    float rate;
    printf("Enter 1st Amount ,2nd time ,3rd rate\n");
    scanf("%d %d %f",&p,&time,&rate);
    float interest=(p*rate*time)/100;
    printf("simple interest = %f",interest);
    return 0;
}