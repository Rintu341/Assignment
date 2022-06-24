#include <stdio.h>

int main(){
    int Bengali,english,physics,chemistry,mathematics;
    printf("In Bengali\n");
    scanf("%d",&Bengali);
    printf("In english\n");
    scanf("%d",&english);
    printf("In physics\n");
    scanf("%d",&physics);
    printf("In chemistry\n");
    scanf("%d",&chemistry);
    printf("In mathematics\n");
    scanf("%d",&mathematics);\
    float totalMarks=(Bengali+english+physics+chemistry+mathematics)/5;
    if(totalMarks>=33)
        printf("The candidate is Passed\n");
    else
        printf("The candidate is failed\n");
 
    return 0;
}