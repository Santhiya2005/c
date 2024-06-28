//write a c program to print the multiplication table without using * operator.
#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
        b+=a;
        printf("%d x %d = %d\n",a,i,b);
    }
    

}