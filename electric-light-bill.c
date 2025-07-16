#include<stdio.h>
int main()
{
    int units;
    printf("Enter Electricity units ");
    scanf("%d",&units);


    if( units>=0 && units<100)
    {
        if(units>=101 && units<=200)
        {
            if(units>=201 && units<300)

        
            printf("Total Electricity Bill = %.2f\n",units);

        }
    }       
    return 0;

}