//write a c program to get the starting range and ending range from the user and count the even numbers.
#include<stdio.h>
int main()
{
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        if(i%2==0)
        { 
            count++;
        }
    }
    printf("%d",count);
}