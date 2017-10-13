#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Median( ElementType A[], int N );

int main () {
	ElementType A[MAXN];
	int N, i;

	scanf("%d", &N);
	for ( i=0; i<N; i++ )
		scanf("%f", &A[i]);
	printf("%.2f\n", Median(A, N));
	for( i=0;i<N;i++)
		printf("%.2f	",A[i]);
	return 0;
}




ElementType Median( ElementType A[], int N ) {
	ElementType ret,temp;
	int m,j;
	for (m=0;m<N-1; m++) {
		for ( j=0; j<N-1-m; j++) {
			if(A[j]>A[j+1]) {
				temp=A[j];
				A[j] = A[j+1];
				A[j+1]=temp;
			}
		}
	}
	for( m=0;m<N;m++)
		printf("%.2f	",A[m]);
		printf("\n");
	ret = A[(N/2+1)];
	return ret;
}
