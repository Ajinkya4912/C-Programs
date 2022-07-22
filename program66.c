//Accept N number and another number and count another number iNo equal.

#include<stdio.h>
#include<stdlib.h>
int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    int iCount=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(Arr[iCnt]==iNo)
       {
           iCount++;
       }
    }
    return iCount;
}
int main()
{
    int iSize,iCnt=0;
    int *ptr=NULL;
    int iRet=0,iValue=0;
    printf("Enter number of Elememt\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));
    
    printf("Enter the Values of Elemnt\n");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       scanf("%d",&ptr[iCnt]);
   }
   printf("Enter Another number\n");
   scanf("%d",&iValue);
   iRet=Frequency(ptr,iSize,iValue);
   printf("Frequency of Number:%d",iRet);

   free(ptr);
   return 0;
}