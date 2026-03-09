#include<stdio.h>
int main()
{
    int i,n,j,x;
    //user input
    printf("Give row number:");
    scanf("%d",&x);

    for(n=1; n<=x; n++)
    {
       for (i=1; i<=x-n; i++)
        {
            printf(" ");
        }
       for (j=1; j<=n; j++)
        {
            printf("*");
        }

       printf("\n");
    }

}
