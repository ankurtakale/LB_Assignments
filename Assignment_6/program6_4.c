#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }
    
    int result = 1;
    if(iNo1 != 0)
    {
        result = result * iNo1;
    }
    if(iNo2 != 0)
    {
        result = result * iNo2;
    }
    if(iNo3 != 0)
    {
        result = result * iNo3;
    }
    return result;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue1);

    printf("Enter number : ");
    scanf("%d",&iValue2);

    printf("Enter number : ");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d ",iRet);
    
    return 0;
}