#include <stdio.h>

int main(){
int num ;
printf("Enter a num");
scanf("%d",&num);
if(num==0)
{
    printf("Zero: %d",num);
}
else if (num<0)
{
    printf("Negative :%d");
}
    return 0;
}