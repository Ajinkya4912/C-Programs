// input:4
// output:4
/*
a a a a
b b b b
c c c c 
d d d d
*/
#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch='\0';

    if(iRow!=iCol)
    {
        return;
    }
    for (i = 1,ch='a'; i <= iRow; i++,ch++)
    {
        for (j = 1; j <= iCol; j++)
        {
                 printf("%c\t",ch);                  
        }
        printf("\n");
    }
}
int main()
{
    int iValue1;
    int iValue2;

    printf("Enter Rows\n");
    scanf("%d", &iValue1);

    printf("Enter Colum\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);
    return 0;
}