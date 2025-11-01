#include<stdio.h>

int FindLargest(int x,int y,int z)
{
    if(x > y && x > z)
    {
        return x;
    }
    else if(y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter three numbers: ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);
    
    iRet = FindLargest(iValue1,iValue2,iValue3);

    printf("Maximum is : %d ",iRet);
    
    return 0;
}