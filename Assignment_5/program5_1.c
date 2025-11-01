#include<stdio.h>

void CheckEvenOdd(int iNum)
{
    if((iNum % 2) == 0)
    {
        printf("%d is an even number",iNum);
    }
    else
    {
    printf("%d is an odd number",iNum);
    }
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}