#include "Header6.h"
///////////////////////////////////////////////
//Write a program to perform Addition of Two Numbers.
///////////////////////////////////////////////
int main()
{
int iNo1=0;
int iNo2=0;
int iNo3=0;
 printf("Enter the first no\n");
 scanf("%d",&iNo1);

 printf("Enter the Second no\n");
 scanf("%d",&iNo2);

iNo3=Addition(iNo1,iNo2);
printf("Addition of Two number is%d\n",iNo3);

return 0;
}
///////////////////////////////////////////////
//Input:   10  11
//Output:   21
///////////////////////////////////////////////