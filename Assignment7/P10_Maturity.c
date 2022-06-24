#include <stdio.h>

int main(){
    int Amount,age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Enter the Amount to invest\n");
    scanf("%d",&Amount);
    float MaturityAmount,interest;
    if (age>=18&&age<=25)
    {
        interest=(Amount*5*30)/100;
        MaturityAmount = Amount+interest;
        printf("Your Maturity Amounnt = %f",MaturityAmount);
    }else if (age>25&&age<=40)
    {
        interest=(Amount*5*20)/100;
        MaturityAmount = Amount+interest;
        printf("Your Maturity Amounnt = %f",MaturityAmount);
    }else if (age>40&&age<=55)
    {
        interest=(Amount*5*10)/100;
        MaturityAmount = Amount+interest;
        printf("Your Maturity Amounnt = %f",MaturityAmount);
    }
    return 0;
}