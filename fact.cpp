//write a c program to print the factors of given number
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int fact=1;
    for(int i=1;i<=a;i++)
    {
        fact=fact*i;
    }
printf("%d",fact);
}