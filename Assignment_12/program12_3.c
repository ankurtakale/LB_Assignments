#include<stdio.h>

int Sum_Of_Factors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
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

    iRet = Sum_Of_Factors(iValue1);

    printf("Sum of factors : %d",iRet);

    return 0;
}