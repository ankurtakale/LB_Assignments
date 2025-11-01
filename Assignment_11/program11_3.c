#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
    int iCnt = 0;
    int iAns = 0;

    if(iStart > iEnd || iStart < 0)
    {
        return -1;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iAns+=iCnt;
    }
    
    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : ");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    if(iRet == -1)
    {
        printf("Invalid range");
    }
    else
    {
        printf("Addition is : %d",iRet);
    }
    
    return 0;
}