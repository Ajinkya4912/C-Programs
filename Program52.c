//Check whether Armstrong Number
#include<stdio.h>
#include<stdbool.h>
bool CheckArmstrong(int iNo)
{
    int iTemp=0;
    iTemp=iNo;
    int iDigCnt=0,iSum=0;
    int iDigit=0;
    int iCnt=0;
    int iMult=1;
    while (iNo>0)
    {
        iDigCnt++;
        iNo=iNo/10;
    }
    iNo=iTemp;
    while (iNo>0)
    {   
        iMult=1;
        iDigit=iNo%10;
        for(iCnt=1;iCnt<=iDigCnt;iCnt++)
        {
            iMult=iMult*iDigit;
        }
        iSum=iSum+iMult;
        iNo=iNo/10;
    }
    if(iTemp==iSum)
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
    bool bRet;
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    bRet=CheckArmstrong(iValue);
    if(bRet==true)
    {
        printf("Number is Armstrong");
    }
    else
    {
        printf("Number is not Armstrong");
    }
    return 0;
}