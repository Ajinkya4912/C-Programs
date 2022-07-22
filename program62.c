//Summation of Number
#include<stdio.h>
#include<stdlib.h>
int SummationNumber(int Arr[],int iLength)
{
    int iCnt=0,iSum=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       iSum=iSum+Arr[iCnt];
    }
    return iSum;
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
   iRet=SummationNumber(ptr,iSize);
   printf("Summation NUmber:%d",iRet);

   free(ptr);
   return 0;
}