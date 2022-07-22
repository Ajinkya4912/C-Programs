//returns a reverse number
#include<stdio.h>
int Reverse(int iNo)
{
    int iDigit=0;
    int iRev=0;
    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }
    return  iRev;
}  int main()
{
int iRet;
int iValue=0;
printf("Enter number\n");
scanf("%d",&iValue);
iRet=Reverse(iValue);
printf("Reverse number is: %d",iRet);
}


