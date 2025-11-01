#include<stdio.h>

int Sum_Of_Natural_Numbers(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum+=iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;
   
    printf("Enter number : ");
    scanf("%d",&iValue1);

    iRet = Sum_Of_Natural_Numbers(iValue1);

    printf("Sum of natural numbers : %d ",iRet);

    return 0;
}