#include <stdio.h>

int main(){
    int number;
    printf("Enter Number\n");
    scanf("%d",&number);
    printf((number%2)?"Odd":"Even");
    return 0;
}