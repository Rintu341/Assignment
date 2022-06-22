//This is only for three digit number
#include <stdio.h>

int main(){
    int digit;
    printf("Enter three digit Number\n");
    scanf("%d",&digit);
    int middle;
    middle=digit/10;
    printf("Middle digit of a number = %d",middle%10);

    return 0;
}