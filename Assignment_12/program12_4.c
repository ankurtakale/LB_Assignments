#include<stdio.h>

int Sum_Of_Even_Factors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0 && (iCnt % 2 == 0))
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

    iRet = Sum_Of_Even_Factors(iValue1);

    printf("Sum of even factors : %d",iRet);

    return 0;
}