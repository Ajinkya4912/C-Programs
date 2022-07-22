//Accept number from user and display its factor
#include<stdio.h>
int iCnt=0;
void DisplayFactors(int iNo)
{
    for(iCnt=1;iCnt<=iNo-1;iCnt++)
    {
        if((iNo%iCnt)==0)
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


    DisplayFactors(iValue);
    return 0;
}
//Time complacity O(n)  //big O