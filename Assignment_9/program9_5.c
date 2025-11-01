#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iAns1 = 1;
    int iAns2 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iAns1*=iCnt;
        }
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            iAns2*=iCnt;
        }
    }
    return iAns1 - iAns2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial of number is :%d ",iRet);
    
    return 0;
}