#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0, iValue = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    
    printf("Enter %d elements :\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number to calculate frequency : ");
    scanf("%d",&iValue);

    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(p);

    return 0;
}