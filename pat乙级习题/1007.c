#include <stdio.h>

int isPrime(int x);
int main()
{
	int n;
	scanf("%d", &n); 
	int cnt = 0;
	for (int i = 2;i <= n;i++)
	{
		if (isPrime(i) && isPrime(i + 2))
			cnt++;
	}
	printf("%d", cnt);
	getch();
	return 0;
}
int isPrime(int x)
{
	int ret = 1;
	for (int i = 2;i < x;i++)
	{
		if (x%i == 0)
		{
			ret = 0;
			break;
		}
	}
	return ret;
}