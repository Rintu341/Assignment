#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if (x>=100&&x<=999)
        printf("That is Three digit number\n");
    else
        printf("That is not Three digit number\n");    
    return 0;
}