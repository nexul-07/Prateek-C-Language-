#include <stdio.h>

int main(){
int m,s,e;
printf("Marks1: ");
scanf("%d",&m);
printf("Marks2: ");
scanf("%d",&s);
printf("Marks3: ");
scanf("%d",&e);
if(m>33||s>33||e>33)
{
printf("Fail hai tu ");
}
else if(s+m+e/3<40){
printf("Sorry bro Failed");

}
else
{
    printf("Mithai Khilao Pass hogya hai ");
}
    return 0;
}