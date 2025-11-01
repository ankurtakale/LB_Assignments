#include<stdio.h>

int FindMax(int a,int b)
{
    int iAns = 0;

    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
    return iAns;
}

int main()
{
    int num1,num2,result;

    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    result = FindMax(num1,num2);

    printf("Maximum is %d\n",result);

    return 0;
}