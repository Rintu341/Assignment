#include <stdio.h>

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    //swap with out using third variable
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("Swap num1 = %d ,num2 = %d",num1,num2);
    return 0;
}