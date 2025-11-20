#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0', CH = '\0';

    for(i = 1; i <= iRow; i++)
    {
        CH = 'A';
        ch = 'a';
        for(j = 1; j <= iCol; j++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t",ch);
                ch++;
            }
            else
            {
                printf("%c\t",CH);
                CH++;
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