#include<stdio.h>
int main()
{
    int sum=0;
    int n=1; //The variable n is called counter of countrol variable
    while (n <= 10)  //Loop Start and TESTING
    {
        sum = sum+n*n ;
        n=n+1; //Increment

    }   //Loop End

    printf("sum = %d\n", sum);
}
