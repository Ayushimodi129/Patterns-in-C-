#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        for(j=1;j<=i;j++)
        printf("*");
        for(j=i-1;j>=1;j--)
        printf("*");
        printf("\n");
    }

    for(i=1;i<=n;i++)
    {
        for(j=i-1;j>=1;j--)
        printf(" ");
        for(j=n-i+1;j>=1;j--)
        printf("*");
        for(j=n-i;j>=1;j--)
        printf("*");
        printf("\n");
    }
    return 0;
}
