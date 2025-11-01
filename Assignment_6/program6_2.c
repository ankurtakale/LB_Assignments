#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int num)
{
    if(num > 100)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);
    if(bRet == true)
    {
        printf("Greater");
    }
    else 
    {
        printf("Smaller");
    }

    return 0;
}