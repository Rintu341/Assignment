#include <stdio.h>

int main(){
    float usd,inr;
    printf("Enter the amount In INR\n");
    scanf("%f",&inr);
    usd = inr/76.23;
    printf("%f INR = %f USD",inr,usd);
    return 0;
}