#include"Header51.h"
int main()
{
    int iValue1=0;
    int iValue2=0;
    ULONG lRet=0;
    printf("Enter base\n");
    scanf("%d",&iValue1);

    printf("Enter Power\n");
    scanf("%d",&iValue2);

    lRet=Power(iValue1, iValue2);
    printf(" Result is: %ld\n",lRet);
     return 0;
}