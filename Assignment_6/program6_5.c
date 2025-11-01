#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    if(iNo1 == 0 && iNo2 == 0)
    {
        return 0;
    }
    
    float result = 0;
    
    result = ((float)iNo2 / iNo1) * 100;
    
    return result;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Enter total marks : ");
    scanf("%d",&iValue1);

    printf("Enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage : %f ",fRet);
    
    return 0;
}