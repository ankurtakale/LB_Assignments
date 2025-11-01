#include<stdio.h>

double SquareMeter(int dValue)
{
    double dAns = 0.0;
    
    if(dValue < 0)
    {
        dValue = -dValue;
    }

    dAns = dValue * 0.0929;

    return dAns;
}

int main()
{
    double dValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter area in square feet : ");
    scanf("%lf",&dValue);

    dRet = SquareMeter(dValue);

    printf("Area in square meter is :%lf ",dRet);
    
    return 0;
}