#include <stdio.h>

int main(){
    float cost_price,sell_price;
    float profit,loss,profit_percentage,loss_percentage;
    printf("Enter  cost_price and sell_price of the Product\n");
    scanf("%f %f",&cost_price,&sell_price);
    if (sell_price>=cost_price)
    {
        profit=sell_price-cost_price;
        profit_percentage= (profit*100)/cost_price;
        printf("Product profit percentage = %f%%",profit_percentage); 
    }else{
        loss  =cost_price-sell_price;
        loss_percentage =(loss*100)/cost_price;
        printf("Product loss percentage = %f%%",loss_percentage); 
    }
    return 0;
}