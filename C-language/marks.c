//Grade Calculation 
#include <stdio.h>

int main(){
int marks;
printf("Enter the marks: ");
scanf("%d",&marks);
if(marks>90&&marks<=100)
{
    printf("\nA");
}
else if(marks>80&&marks<=90)
{
    printf("\nB");
}
else if(marks>70&&marks<=80)
{
    printf("\nC");
}
else if(marks>=60&&marks<=70)
{
    printf("\nD");
}
else {
    printf("\nF");
}
return 0;
}

