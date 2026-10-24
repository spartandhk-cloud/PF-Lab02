#include <stdio.h>
int main()
{
    int  i, sum=0, count = 0, first;
    for(int num=2;count<4;num++)
    {
      for(i=1;i<num;i++)
        {
            if(num%i==0)
            {
                sum=sum+i;
            }
        }
        if(sum == num)
        {
            printf("%d is a perfect number\n",num);
            first=1;
             for(i=1;i<num;i++)
            {
                if(num%i==0)
                {
                    if(first==0)
                    {
                        printf("+");
                    }
                    printf("%d",i);
                    first=0;
                }
            }
              printf("=%d\n",sum);
            count++;
        }
    }
    return 0;
}
