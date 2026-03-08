#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Give a positive integer number:");
    scanf("%d", &a);
    printf("_________________\n");
    for(b=1;b<11;b++)
    {
        sum=a*b;
        printf("%d X %d = %d\n", a,b,sum);
    }
}
