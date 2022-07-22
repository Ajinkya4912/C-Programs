//Display number how many Digit.
#include<stdio.h>
int CountDigits(int iNo)
{  
  int iCnt=0;
  while(iNo!=0)
{
    iCnt++;
    iNo=iNo/10;
}
return iCnt;
}
int main()
{
int iRet;
int iValue=0;
printf("Enter number\n");
scanf("%d",&iValue);
iRet=CountDigits(iValue);
printf("%d",iRet);
}