
// Input :4
// output:12344321

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt =1; iCnt <=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("please Enter Value\n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}