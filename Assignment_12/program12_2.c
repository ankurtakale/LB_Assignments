#include<stdio.h>

int Count_Factors(int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;
   
    printf("Enter number : ");
    scanf("%d",&iValue1);

    iRet = Count_Factors(iValue1);

    printf("Total factors are : %d",iRet);

    return 0;
}