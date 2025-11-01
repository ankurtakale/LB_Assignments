#include<stdio.h>
#include<stdbool.h>

bool Is_Divisible_By_Five(int iNo)
{
    if((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0;
    bool bRet = false;
   
    printf("Enter number : ");
    scanf("%d",&iValue1);

    bRet = Is_Divisible_By_Five(iValue1);

    if(bRet == true)
    {
        printf("%d is divisible by 5 ",iValue1);
    }
    else
    {
        printf("Not divisible by 5");
    }

    return 0;
}