//program to display 5 times Hello on Screen
#include<stdio.h>
void Display(int iNo)   
{
 int iCnt=0;
 if(iNo<0)  //Filter
 {
     printf("plese positive number");
     return;
 }
 //1  Intiliaztion
 //2  Condition
 //3  Displacement
 //4  Loop body
//      1      2      3
 for(iCnt=1;iCnt<=iNo;iCnt++)
 { //         4
     printf("Hello\n");
 }   
}
int main()
{
    int iValue=0;
    printf("Enter the number");
    scanf("%d",&iValue);
    Display(iValue);     //function call
    
        return 0;
}
