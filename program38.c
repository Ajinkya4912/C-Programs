//Display number Digits.
#include<stdio.h>
//Input:7856
//output:6587
void DisplayDigits(int iNo)
{
   int iDigit;
   while(iNo!=0)
   {
      iDigit=iNo%10;
      printf("%d ",iDigit);
      iNo=iNo/10;
   } 
}
int main()
{
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    DisplayDigits(iValue);
    return 0;
}