//Display Even number
#include<stdio.h>
int DisplayEven(int iNo)
{  
  int iDigit=0;
  while(iNo!=0)
{   
    iDigit=iNo%10;
    if(iDigit%2==0)
    {
        printf("%d",iDigit);
    }
    iNo=iNo/10;
}
}
int main()
{
int iRet;
int iValue=0;
printf("Enter number\n");
scanf("%d",&iValue);
DisplayEven(iValue);
//printf(" Sum of Even number %d",iRet);
}