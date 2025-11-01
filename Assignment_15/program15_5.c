#include<stdio.h>

int  CountDiff(int iNo)
{
    int iDigit=0;
    int iSum = 0;
    int iSub = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSum+=iDigit;
        }
        if((iDigit % 2) != 0)
        {
            iSub+=iDigit;
        }
        iNo = iNo / 10;
    }

    return iSum - iSub;
}
int main()
{
    int iValue=0;
    int iRet = 0;
    
    printf("Enter the Number : ");
    scanf("%d",&iValue);
    
    iRet = CountDiff(iValue);

    printf("Difference is : %d ",iRet);
    
    return 0;
}