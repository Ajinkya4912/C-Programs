//Sumation of Digits
#include<stdio.h>
int SumDigits(int iNo)
{  
  int iDigit=0;
  int iSum=0;
  while(iNo!=0)
{   
    iDigit=iNo%10;
    iSum=iSum+iDigit;
    iNo=iNo/10;
}
return iSum;
}
int main()
{
int iRet;
int iValue=0;
printf("Enter number\n");
scanf("%d",&iValue);
iRet=SumDigits(iValue);
printf(" Sumation of Digits%d ",iRet);
}