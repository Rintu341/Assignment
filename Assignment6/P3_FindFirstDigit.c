//This is only for three digit number
#include <stdio.h>

int main(){
    int digit;
    printf("Enter three digit Number\n");
    scanf("%d",&digit);
    printf("First digit of a number = %d",digit/100);
    return 0;
}