// input:4
// output:4
/*
a 
a b
a b c
a b c d
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
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1,ch='a'; j <= iCol; j++,ch++)
        {
                if(i>=j)
                {
                    printf("%c\t",ch);
                }                  
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