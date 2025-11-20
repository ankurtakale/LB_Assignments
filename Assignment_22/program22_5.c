#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, iValue = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

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

    iRet = Frequency(p,iSize,iValue);

    printf("Frequency of %d is : %d",iValue,iRet);

    free(p);

    return 0;
}