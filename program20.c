
#include<stdio.h>
int iSum=0;
int iCnt=0;
 int Summation(int iNo)
{
    if(iNo<0)
    {
        iNo= -iNo;
    }
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
      iSum=iSum+iCnt;
  }
  return iSum;
}
int main()
{
    int iRet=0;
    int iValue=0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=Summation( iValue);
    printf("Summation is:%d\n",iRet);
    return 0;
}

