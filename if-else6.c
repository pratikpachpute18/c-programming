#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Number");
    scanf("%d %d %d",&a, &b, &c);

    if(a>b)
    b=a;
if(c>b)
b=c;
printf("Max is %d",b);
return 0;
}