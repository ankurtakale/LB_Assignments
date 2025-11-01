#include<stdio.h>

void Nmuber(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    if(iNo > 100)
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);

    Nmuber(iValue);
    
    return 0;
}