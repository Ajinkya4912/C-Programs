//Accept number from user and display its perfect number or not.
#include<stdio.h>
#include<stdbool.h>
int SumFactor(int iNo)
{
    int iSum=0;
    int iCnt=0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
   for(iCnt=1;((iCnt<=(iNo/2))&&(iSum<=iNo));iCnt++)
   {
       if((iNo%iCnt)==0)
       {
           iSum=iSum+iCnt;
       }
   }
   return iSum;
}
bool CheckPerfect(int iNo)
{
    int iAns=0;
    iAns=SumFactor(iNo);
    if(iAns==iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue=0;
    bool bRet;
    printf("Enter Number\n");
    scanf("%d",&iValue);
     bRet=CheckPerfect(iValue);
      if(bRet==true)
      {
          printf("Number is perfect number\n");
      }
      else
      {
          printf(" Number is not perfect\n");
      }
    return 0;
}