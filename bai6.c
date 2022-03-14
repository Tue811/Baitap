#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    float S=0;
    printf("nhap n= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        S+=1.0/(i*(i+1));
    }
    printf("S= %f",S);
    return 0;
}

