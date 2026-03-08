#include<stdio.h>
int main()
{
    float i;
    printf("Write your CGPA point:");
    scanf("%f",&i);
    if(i==4)
        printf("Your Grade = A+");
    else if(i<4 && i>=3.75)
        printf("Your Grade = A");
    else if(i<3.75 && i>=3.50)
        printf("Your Grade = A-");
    else if(i<3.50 && i>=3.25)
        printf("Your Grade = B+");
    else if(i<3.25 && i>=3.00)
        printf("Your Grade = B");
    else if(i<3.00 && i>=2.25)
        printf("Your Grade = B-");
    else
        printf("Fail");
}
