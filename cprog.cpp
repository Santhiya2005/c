#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 0 ... 34:
            printf("fail");
            break;
        case 35 ... 60:
            printf("avg");
            break;
        case 61 ... 80:
            printf("Good");
            break;
        case 81 ... 100:
            printf("Excellent");
            break;
        default:
            printf("invalid");
    }
}

