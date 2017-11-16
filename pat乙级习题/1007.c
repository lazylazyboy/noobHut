#include <stdio.h>
#include <math.h>
int isPrime(int x);
int main()
{
	int n;
	scanf("%d", &n); 
	int cnt = 0;
	for (int i = 3;i < n-1;i+=2)
	{
		if (isPrime(i) && isPrime(i + 2))
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}
int isPrime(int x)
{
	int ret = 1;
	for (int i = 2;i <= sqrt(x);i++)	//此处循环到x的平方根处就足够判断是否是素数了,减少时间消耗
	{
		if (x%i == 0)
		{
			ret = 0;
			break;
		}
	}
	return ret;
}
