#include <stdio.h>
int main()
{
    char sym;
    printf("Enter symbol: ");
    scanf("%c",&sym);

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",sym);
        }
        printf("\n");
    }
    for(int i=4;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",sym);
        }
        printf("\n");
    }
    return 0;
}
