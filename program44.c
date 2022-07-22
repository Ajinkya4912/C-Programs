//Sumation of Digits
#include<stdio.h>
int SumEven(int iNo)
{  
  int iSum=0; 
  int iDigit=0;
  while(iNo!=0)
{   
    iDigit=iNo%10;
    if(iDigit%2!=0)
    {
        iSum=iSum+iDigit;
    }
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
iRet=SumEven(iValue);
printf(" Sum of Even number %d",iRet);
}