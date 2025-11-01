#include<stdio.h>

void Print_Numbers(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
   
    printf("Enter number : ");
    scanf("%d",&iValue1);

    Print_Numbers(iValue1);

    return 0;
}