#include <stdio.h>
int main()
{
    int n,i,fact=1;
    float x,power=1,s=0,term;
    printf("Enter the value for n: ");
    scanf("%d",&n);
    printf("Enter the value for x: ");
    scanf("%f",&x);
    for(int k=0;k<=n;k++)
    {
        for(i = 1; i <= k; i++)
        {
            power=power*x;
            fact=fact*i;
        }
        term = power / fact;
        s = s + term;
    }
   printf("s = %.1f", s);
   return 0;
}
