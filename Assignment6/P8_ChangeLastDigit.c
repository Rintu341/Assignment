#include <stdio.h>

int main(){
    int digit;
    scanf("%d",&digit);
    int add;
    printf("Enter which number you want to add\n");
    scanf("%d",&add);
    digit=digit*10+add;
    printf("The resulting number = %d",digit);
    return 0;
}