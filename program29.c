//Accept number from user and display its  factor of sum
#include<stdio.h>

int SumFactor(int iNo)
{
    int iSum=0;
    int iCnt=0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
   for(iCnt=1;iCnt<=iNo/2;iCnt++)
   {
       if((iNo%iCnt)==0)
       {
           iSum=iSum+iCnt;
       }
   }
   return iSum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
     iRet=SumFactor(iValue);
     printf("%d ",iRet);
    return 0;
}