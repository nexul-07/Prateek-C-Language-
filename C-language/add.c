#include <stdio.h>
int main()
{
    int length,breadth;
    
    printf("Enter the length of a rectangle-");
    scanf("%d",&length);
    printf("Enter the breadth of a rectangle-");
    scanf("%d",&breadth);
    int area=length*breadth;
    printf("Area of a Rectangle= %d\n",area);
    return 0;
}