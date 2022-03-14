#include<stdio.h>
#include<math.h>
int main() {
	int n, x, k=1, ts=1, ms=1;
	float s = 1;
    printf("Nhap x, n:");
	scanf("%d%d", &x, &n);
	for(int i = 1; i <= n; i++) {
		ts = pow(x, i*2);
		ms = ms*k*(k+1);
		k+=2;
		s+=(ts*1.0/ms);
	}
	printf("%f", s);
	return 0;
}