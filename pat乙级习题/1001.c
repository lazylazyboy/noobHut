#include <stdio.h>

int fun(int n);
int main()
{
	int n = 0;
	int cnt=0;
	scanf ("%d",&n);
	while(n!=1)
	{
		if (fun(n))
			n=n/2;
		else
			n=(3*n+1)/2;
		cnt++;
	}
	printf("%d",cnt);
	return 0;
}
int fun(int N)
{
	int ret =0;
	if (N%2==0)
		ret = 1;	//1->Å¼Êı 0->ÆæÊı
	return ret;
}
