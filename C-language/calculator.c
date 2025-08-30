#include <stdio.h>

int main(){
int num1,num2,choice;
float result;
printf("Enter the num1,num2: ");
scanf("%d",&num1);
scanf("%d",&num2);
printf("\nChoose the operato:\n");
printf("5.Addition \n");
printf("2.Subtraction \n");
printf("3.Multiplication \n");
printf("4.Division\n");
printf("Enter your choice : ");
scanf("%d",&choice);


switch(choice){

case 1: 
result =num1+num2;
printf("Result: %.2f\n",result);
break;
case 2:
result =num1-num2;
printf("Result: %.2f\n",result);
break;

case 3:
result=num1*num2;
printf("Result:%.2f\n",result);
break;
case 4:
if(num2!=0)
{
result=num1/num2;
printf("Result: %.2f\n",result);
}
else 
{
    printf("enter a valid no. \n");
}
break;

default: 
printf("Invalid Input \n");
}
    return 0;
}