#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
            break;
        }
    }

    return -1;
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

    iRet = FirstOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurence of number is : %d",iRet);
    }

    free(p);

    return 0;
}