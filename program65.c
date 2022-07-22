//Accept N number from user And Calculate Largest Number
#include<stdio.h>
#include<stdlib.h>
//postitive Number And Negative.
int Minimum(int Arr[],int iLength)
{
    int iMin=Arr[0];
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(iMin>Arr[iCnt])
       {
           iMin=Arr[iCnt];
       }
    }
    return iMin;
}
int main()
{
    int iSize,iCnt=0;
    int *ptr=NULL;
    int iRet=0;
    printf("Enter number of Elememt\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));
    
    printf("Enter the Values of Elemnt\n");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       scanf("%d",&ptr[iCnt]);
   }
   iRet=Minimum(ptr,iSize);
   printf("Minimum Number:%d",iRet);

   free(ptr);
   return 0;
}