#include<stdio.h>
int main()
{
    int s,t,b,capacity;
    scanf("%d%d%d",&s,&t,&b);
    capacity=2*t*s*b*512/1024;
    printf("%d KB",capacity);
}