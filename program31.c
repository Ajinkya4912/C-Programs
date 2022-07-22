//Accept number from user and display its perfect number or not.
#include<stdio.h>
#include<stdbool.h>
bool CheckPerfect(int iNo)
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
   if(iSum==iNo)
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