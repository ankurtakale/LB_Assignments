#include<stdio.h>

void Print_Factors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue1 = 0;
   
    printf("Enter number : ");
    scanf("%d",&iValue1);

    Print_Factors(iValue1);

    return 0;
}