// Last Occurance
#include<stdio.h>
#include<stdlib.h>
int SearchLastOccurance(int Arr[],int iLength,int iNo)
{
    int iCnt=0;
    for(iCnt=iLength;iCnt>=0;iCnt--)
    {
       if(Arr[iCnt]==iNo)
       {
         break;      
       }
    }
        return iCnt;
} 
int main()
{
    int iSize,iCnt=0;
    int *ptr=NULL;
    int iRet=0,iValue=0;
    printf("Enter number of Elememt\n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));
    //Last Dulicate element
    printf("Enter the Values of Elemnt\n");
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       scanf("%d",&ptr[iCnt]);
   }
   printf("Enter Another number\n");
   
   scanf("%d",&iValue);
   iRet=SearchLastOccurance(ptr,iSize,iValue);
   
   if(iRet==-1)
   {
       printf("There is no such elemnt in array:%d\n",iRet);
   }
   else
   {
       printf("There is search Element:%d\n ",iRet);
   } 
   free(ptr);
   return 0;
}  