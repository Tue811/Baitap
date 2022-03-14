#include<stdio.h>
#include<math.h>
int main()
{
    int x,n;
    int y=0;
    float S=0;
    printf("nhap n= ");
    scanf("%d",&n);
    printf("nhap x= ");
    scanf("%d",&x);
    for(int i=1; i<=n;i++)
    {
        y= y+i;
        S+= (1.0*pow(x,i))/y;
    }
    printf("S= %f",S);
}