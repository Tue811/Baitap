#include<stdio.h>
#include<math.h>
int main() {
    int n, x, ts=1, ms=1;
    printf("Nhap x, n:");
	scanf("%d%d", &x, &n);
	float s = 1+x;
	for(int i = 1; i <= n; i++) {
		ts = pow(x, 2*i+1);
		ms = ms*i*2*(2*i+1);
		s+=(ts*1.0/ms);
	}
	printf("%f", s);
	return 0;
}