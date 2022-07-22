#include<stdio.h>
#include<stdlib.h>  //for malloc and free
void Display(int Arr[],int iLength)
{
    int iCnt=0;
 printf("Elements of Array are:\n");

for(iCnt=0;iCnt<iLength;iCnt++)
{
    printf("%d\n",Arr[iCnt]);
}
}
int main()
{
int *ptr=NULL;
register int iCnt=0;
int iSize=0;
//auto int Brr[5];  static memory Allocation
printf("Enter the number of element:\n");
scanf("%d",&iSize);
ptr=(int*)malloc(iSize*sizeof(int));
printf("Enter Element\n");
for(iCnt=0;iCnt<iSize;iCnt++)
{
    scanf("%d",&ptr[iCnt]);
}
Display(ptr,iSize);   
free(ptr);
return 0;
}
