// input:5
// output:1  *  3   *    5

#include <stdio.h>

void Display(int iNo)
{
    char iCnt = 0;
    int iSum=0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt%2==0)
        {
            printf("*\t");
        }
        else
        {
          printf("%d\t",iCnt);
        }
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