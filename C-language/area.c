#include <stdio.h>
#define pi 3.14
int main()
{

    float radius,area,volume;
   
    printf("Enter the radius-");
    scanf("%f",&radius);
     area=pi*radius*radius;
    printf("The area is- %f \n",area);
float height;
printf("Enter the height-");
scanf("%f",&height);
float c_area=height*radius;
printf("Volume of Cylinder is- %f\n",c_area);
    return 0;
}