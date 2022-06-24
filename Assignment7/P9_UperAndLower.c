#include <stdio.h>

int main(){
    char alphabet;
    printf("Enter any alphabet\n");
    scanf("%c",&alphabet);
    int copy;
    copy=(int)alphabet;
    if (copy>=65&&copy<=90)
    {
        printf("Uppercase\n");
    }else if (copy>=97&&copy<=122)
    {
        printf("Lowercase\n");
    }
    
    
    return 0;
}