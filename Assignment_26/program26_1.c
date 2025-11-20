#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char cCnt = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",cCnt);
        cCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter element : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}