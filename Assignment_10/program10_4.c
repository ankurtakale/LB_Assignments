#include<stdio.h>

double FhToCs(float fTemp)
{
    double dAns = 0.0;
    
    dAns = (fTemp - 32) * (5.0/9.0);

    return dAns;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Temperature in Celsius is :%lf ",dRet);
    
    return 0;
}