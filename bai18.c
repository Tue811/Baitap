#include<stdio.h>
#include<math.h>
int main()
{
    int x,n;
    int y=1;
    float S=0;
    printf("nhap n= ");
    scanf("%d",&n);
    printf("nhap x= ");
    scanf("%d",&x);
    for(int i=1; i<=n;i++)
    {
        y= y*(2*i-1)*(2*i);
        S+= (1.0*pow(x,2*i))/y;
    }
    printf("S= %f",S);
}