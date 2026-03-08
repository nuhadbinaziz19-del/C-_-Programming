#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("Input number of terms:");
    scanf("%d", &n);
    printf("\nThe odd numbers are :\n");

    for(i=1;i<=n;i++)
    {
       printf("%d ", 2*i-1);
       sum= sum+i;
    }
    printf("\n\nThe Sum of odd Natural Number up to %d terms : %d\n",n,sum);
}
