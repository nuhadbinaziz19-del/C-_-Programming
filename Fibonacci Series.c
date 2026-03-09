#include<stdio.h>
int main()
{
    int i,n, f1=0, f2=1, f;
    //user input
    printf("Enter the value of terms:");
    scanf("%d",&n);
    printf("Fibonacci series of %d terms: \n%d,%d,",n,f1,f2);
    for (i=3; i<=n; ++i)
    {
        f= f1+f2;
        f1 = f2;
        f2 = f;
        printf("%d,",f);
    }
    printf("\n");
}
