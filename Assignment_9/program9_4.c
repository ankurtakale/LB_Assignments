#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if((iCnt % 2) != 0)
        {
            iAns*=iCnt;
        }
    }
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Factorial of number is :%d ",iRet);
    
    return 0;
}