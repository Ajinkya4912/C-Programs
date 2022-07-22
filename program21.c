#include<stdio.h>
#include<stdbool.h>
bool ChkEven(int iNo)
{
   if((iNo%2)==0)
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

    printf("Enter number");
    scanf("%d",&iValue);
    bool bRet=false;
    bRet=ChkEven(iValue);
    if(bRet==true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }
    return 0;
}

