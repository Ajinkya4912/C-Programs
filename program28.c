//Accept number from user and display its non factor
#include<stdio.h>

void DisplayNonFactors(int iNo)
{   
    int iCnt=0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue=0;

    printf("Enter number\n");
    scanf("%d",&iValue);


    DisplayNonFactors(iValue);
    return 0;
}
// No Time Complicity