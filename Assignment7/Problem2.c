#include <stdio.h>

int main(){
    int number;
    printf("Enter Number\n");
    scanf("%d",&number);
    printf((number%5)?"Number is not Divisible by 5":"Number is Divisible by 5");
    return 0;
}