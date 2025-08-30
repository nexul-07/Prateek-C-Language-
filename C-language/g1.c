#include <stdio.h>

int main(){
int num1,num2,num3;
printf("Enter the num1,num2 and num3: ");
scanf("%d",&num1);
scanf("%d",&num2);
scanf("%d",&num3);
if(num1>num2 && num1> num3)
{
    printf("%d number is the greatest one of it ",num1);
}
else if(num2>num1 && num2>num3){
    printf("%d number is the greatest of it ",num2);
}
else
{
    printf("%d number is the greatest of it ",num3);
}
    return 0;
}