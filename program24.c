#include<stdio.h>
//1gram =4000rs
//2 grams=8000rs
//3gram=12000rs
//4gram=16000rs
void JwelersPortal(int iWeight)
{
    switch(iWeight)
    {
        case 1:
        printf("Your bill amount is 4000\n");
        break;
        case 2:
        printf("Your bill amount is 8000\n");
        break;
        case 5:
        printf("Your bill amount is 20000\n");
        break;
        case 10:
        printf("Your bill amount is 40000\n");
        break;
        default:
        printf("Invalid Weight\n");
        break;
    }
    
}
int main()
{
    int iValue=0;
    printf("Enter the gold coin size that you want to purches\n");
    scanf("%d",&iValue);
   
      JwelersPortal(iValue);
}