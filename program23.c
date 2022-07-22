/*
0 to 35    //fail
35 to 50   //pass class
50 to 50   //second class
60n to 70   //first class
70 to 100   //first class with
*/
#include<stdio.h>
void DisplayClass(float fMarks)
{
    if((fMarks>0.0)&&(fMarks<35.0))
    {
        printf("You are fail\n");
    }
    else if((fMarks>=35.0)&&(fMarks<50.0))
    {
        printf("Pass class");
    }
    else if((fMarks>=50.0)&&(fMarks<60.0))
    {
        printf("Second class");
    }
    else if((fMarks>=60.0)&&(fMarks<70.0))
    {
        printf("First class");
    }
    else if((fMarks>=70.0)&&(fMarks<100))
    {
        printf("First class with distinction");
    }
    else
    {
        printf("Invalid marks\n");
    }
}
int main()
{
    float fValue=0.0;
    printf("Enter the percentage\n");
    scanf("%f",&fValue);
    DisplayClass(fValue);
    return 0;
}