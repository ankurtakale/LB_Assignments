#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iNo = 0, iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iCount = 0;
        iNo = Arr[iCnt];

        while(iNo != 0)
        {
            iNo = iNo / 10;
            iCount++;
        }

        if(iCount == 3)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    Digits(p,iSize);

    free(p);

    return 0;
}