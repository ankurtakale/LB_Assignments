#include<stdio.h>

double CircleArea(float fRadius)
{
    double dAns = 0.0;
    
    dAns = 3.14 * fRadius * fRadius;

    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    
    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is :%lf ",dRet);
    
    return 0;
}