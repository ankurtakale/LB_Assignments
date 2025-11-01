#include<stdio.h>

int KMToMeter(int iNo)
{
   int iAns = 0;
   iAns = iNo * 1000;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in meter is : %d",iRet);
    
    return 0;
}