//This program is about finding which year is the leap year given by the user
#include <stdio.h>
int main(){
int year;
printf("Enter the year: ");
scanf("%d",&year);
if(year%4==0)
{
    printf("The year is leap year  : %d",year);
}
else{
    printf("The year is not a leap year : %d",year);
}
    return 0;
}