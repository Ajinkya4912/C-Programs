#include<stdio.h>
///////////////////////////////////////////////
//
//Function Name:    Addition
//Description  :    used to perform Addtion of 2 number
//Input        :    Integer,Integer
//output       :    Integer
//Date         :    12/04/2022
//Author       :    Ajinkya Santosh Pawar
//
///////////////////////////////////////////////
int Addition(int ivalue1, int ivalue2)
{
   int ians=0;
   ians=ivalue1+ivalue2;
}
///////////////////////////////////////////////
//Write a program to perform Addition of Two Numbers.
///////////////////////////////////////////////
int main()
{
int iNo1,iNo2,iNo3;
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