#include <stdio.h>
int main()
{
    float radius,area;
    printf("Enter Radius of Circle");
    scanf("%f", &radius);
    area=3.14 * (radius*radius);
    printf("Area of Circle is %f",area); 

   return 0;
}