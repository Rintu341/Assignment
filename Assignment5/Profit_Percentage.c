#include <stdio.h>

int main(){
    float SellPrice,CostPrice;
    printf("Enter  Costprice  Then SellPrice\n");
    scanf("%f %f",&CostPrice,&SellPrice);
    float Profit =SellPrice-CostPrice;
    float Profit_percent;
    Profit_percent=(Profit*100)/CostPrice;
    printf("Profit Percentage = %f%%",Profit_percent);
    return 0;
}