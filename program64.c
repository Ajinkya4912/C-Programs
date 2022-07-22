//Accept N number from user And Calculate Largest Number
#include<stdio.h>
#include<stdlib.h>
//postitive Number And Negative.
int Maximum(int Arr[],int iLength)
{
    int iMax=Arr[0];
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
       if(iMax<Arr[iCnt])
       {
           iMax=Arr[iCnt];
       }
    }
    
    return iMax;
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
   iRet=Maximum(ptr,iSize);
   printf("Maximum Number:%d",iRet);

   free(ptr);
   return 0;
}