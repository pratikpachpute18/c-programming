#include<stdio.h>
int main()
{
     float bs, da,hra,tax,total salary;
     printf("Enter Basic Salary");
     scanf("%f", &bs);
    printf("Enter da (%%)");
    scanf("%f", &da); 
    printf("Enter hra (%%)");
    scanf("%f", &hra); 
    printf("Enter tax (%%)");
    scanf("%f", &tax); 
    totalsalary = bs + ((bs *(da + hra-tax))/100);
    printf("Total Salary is %f", totalsalary);

    return 0;
}