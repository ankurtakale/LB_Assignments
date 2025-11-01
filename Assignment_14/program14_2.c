#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue1 = 0;
    BOOL bRet = FALSE;
   
    printf("Enter number : ");
    scanf("%d",&iValue1);

    bRet = ChkZero(iValue1);

    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("There is no zero");
    }

    return 0;
}