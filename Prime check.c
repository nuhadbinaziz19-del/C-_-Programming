#include<stdio.h>
int main()
{
    int i,N;
    printf("............PRIME CHECK...........\n");
    //user input
    printf("Give a number: ");
    scanf("%d",&N);

    if(N<=0)
        printf("It is a negative number");
    else
    {
        for (i=2; i<N; ++i)
         {
            if(N%i==0)
               {
            printf("Not prime number\n");
            return 0;
               }
          }
        printf("Prime Number\n");
    }
}
