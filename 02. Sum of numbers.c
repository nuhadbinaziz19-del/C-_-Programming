#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Give a natural number =");
    scanf("%d",&n);
    for(i=1; i<=n; i=i+1)
    {
       sum=sum+i;
    }
    printf("%d",sum);
}
