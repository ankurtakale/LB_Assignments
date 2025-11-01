#include<stdio.h>

int  MultDigits(int iNo)
{
    int iDigit=0;
    int iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMul*=iDigit;
        }
        iNo = iNo / 10;
    }

    return iMul;
}
int main()
{
    int iValue=0;
    int iRet = 0;
    
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    
    iRet = MultDigits(iValue);

    printf("Multiplication is : %d ",iRet);
    
    return 0;
}