#include<stdio.h>

void Print_Even_Numbers(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
   
    printf("Enter number : ");
    scanf("%d",&iValue1);

    Print_Even_Numbers(iValue1);

    return 0;
}