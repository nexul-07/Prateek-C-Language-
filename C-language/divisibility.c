#include <stdio.h>

int main(){
int num,divisor;
printf("Enter a number : ");
scanf("%d",&num);
printf("Enter the divisior: ");
scanf("%d",&divisor);
if(divisor==0)
{
    printf("Enter a valid divisor other than 0\n");
}
else if(num%divisor==0)
{
    printf("%d is divisible by %d\n",num,divisor);

}
else{
    printf("%d is not divisible by %d\n",num,divisor);
}
    return 0;
}