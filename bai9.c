#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int S=1;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        S*=i;
    }
    printf("S= %d",S);
    return 0;
}