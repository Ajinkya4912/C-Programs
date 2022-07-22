#include "Header6.h"
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
   if(ivalue1<=0)
   {
       ivalue1= -ivalue1;
   }
   if(ivalue2<0)
   {
       ivalue2= -ivalue2;
   }
   ians=ivalue1+ivalue2;
}