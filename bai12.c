#include<stdio.h>
#include<math.h>
int main()
{
    int x,n;
    int S=0;
    printf("nhap x= ");
    scanf("%d",&x);
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        S+= pow(x,i);
    }
    printf("S= %d",S);
}