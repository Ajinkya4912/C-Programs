//Accept number from user and display its factor
#include<stdio.h>

void DisplayFactors(int iNo)
{   
    //int iCnt=0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
      int iCnt=1;
      while (iCnt<=iNo)
      {
          if((iNo%iCnt)==0)
          {
              printf("%d ",iCnt);
          }
          iCnt++;
      }
      
}
int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);


    DisplayFactors(iValue);
    return 0;
}
//Time Complicity O(n/2).