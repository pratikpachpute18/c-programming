#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter 3 Number:");
    scanf("%d %d %d",&a, &b, &c);
    printf("Max is %.2f",fmax(a,fmax(b,c)));
    return 0;

}