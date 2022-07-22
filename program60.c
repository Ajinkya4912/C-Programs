//Accept N number from user and display Even number 
#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iLength)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            printf("%d",Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize=0,iCnt=0;
    int *ptr=NULL;
    printf("Enter number of Element\n");
    scanf("%d",&iSize);
    
    ptr=(int*)malloc(iSize*sizeof(int));

    printf("Enter the values of array:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
     DisplayEven(ptr,iSize);
     free(ptr);
    return 0;
}