#include<stdio.h>

int DollarToINR(int iNo)
{
   int iAns = 0;
   iAns = iNo * 70;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is : %d",iRet);
    
    return 0;
}