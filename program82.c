// input:4
// output:4
/*
$ * * *
* $ * *
* * $ *
* * * $
*/

#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if(i==j)
            {
                printf("$\t");
            }
            else
            {
            printf(" ");
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