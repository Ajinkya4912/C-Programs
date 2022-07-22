#include<stdio.h>
void Display(int Arr[])
{
    int iCnt=0;
 printf("Elements of Array are:\n");

for(iCnt=0;iCnt<5;iCnt++)
{
    printf("%d\n",Arr[iCnt]);
}
}
int main()
{
register int iCnt=0;
auto int Brr[5]; 
printf("Enter element:\n");
for(iCnt=0;iCnt<5;iCnt++)
{
    scanf("%d",&Brr[iCnt]);
}
Display(Brr);   
}
