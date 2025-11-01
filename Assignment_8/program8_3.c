#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        iAns*=iCnt;
    }
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is :%d ",iRet);
    
    return 0;
}