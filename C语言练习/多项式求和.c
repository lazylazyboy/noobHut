#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main() {
	int n, i;
	double a[MAXN], x;

	scanf("%d %lf", &n, &x);
	for ( i=0; i<=n; i++ )
		scanf("%lf" ,&a[i]);
	printf("%.1f\n", f(n, a, x));
	return 0;
}

double f( int n, double a[], double x ) {
	int p=0,q=1;
	long double temp=1.0;
	long double sum=a[0];
	for(p=1; p<=n; p++) {
		for (;q<=p;q++)				
			temp=temp*x;
		sum+=(a[p]*temp);
	}
	return sum;
}
