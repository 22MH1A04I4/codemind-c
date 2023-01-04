#include<stdio.h>
int main()
{
    int a,hrs,min;
    scanf("%d",&a);
    hrs=a/60;
    min=a%60;
    printf("%d Hour(s) %d Minute(s)",hrs,min);
}