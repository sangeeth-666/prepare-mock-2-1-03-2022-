#include <stdio.h>

int main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=i;j<=n-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
