#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iCnt = 1;

    if(iRow != iCol)
    {
        printf("Provide a valid input\n");
        printf("To print this pattern you must provide equal number of columns and rows\n");

        return;
    }
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            if(i == j)
            {
                printf("#\t");
            }
            else if(i > j)
            {
                printf("@\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter rows : ");
    scanf("%d",&iValue1);

    printf("Enter columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}