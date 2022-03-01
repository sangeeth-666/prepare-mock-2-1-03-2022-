#include<stdio.h>

int main()
{
    int n=5,i,j,k;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(k=1;k<=2*i-1;k++)
        {
            printf(" ");
        }
        for(j=1;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
       
    
}
