//Check Duplicate Number

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Duplicate(int Arr[],int iLength,int iNo)
{   
    bool bFlag=false;
    int iCnt=0;
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            bFlag=true;
            break;
        }
    }
  return bFlag;
}
int main()
{
    int iSize=0;
    int *ptr=NULL;
    int iCnt=0,iValue=0;
    bool bRet=false;
   printf("Enter number Element\n");
   scanf("%d",&iSize);

   ptr=(int*)malloc(sizeof(int)*iSize);

   printf("Enter value of Element\n");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       scanf("%d",&ptr[iCnt]);
   }

   printf("Enter Number\n");
   scanf("%d",&iValue);

   bRet=Duplicate(ptr,iSize,iValue);
   if(bRet==true)
   {
       printf("Number is duplicate");
   }
   else
   {
      printf("Number is Not Duplicate");
   }
   free(ptr);
   return 0;
}