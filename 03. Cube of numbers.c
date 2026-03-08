#include<stdio.h>
#include<math.h>
int main()
{
    int i,n, sum=0;
    printf("Give a natural number =");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+1)
    {
       sum=pow(i,3);
       printf("Number is : %d and cube of the %d is :%d\n", i,i,sum);
    }
}
