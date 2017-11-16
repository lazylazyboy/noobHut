#include <stdio.h>

int main()
{
	int a[110];
	int n;
	int m;
	scanf("%d %d", &n, &m);
	int tm = m % n;
	for (int i = 1;i <= n;i++)
	{
		if (i + tm <= n)
			scanf("%d", &a[i + tm]);
		else
		{
			scanf("%d", &a[i + tm - n]);
		}
	}
	for (int i = 1;i <= n;i++)
	{
		printf("%d%s", a[i], i == n ? "" : " ");
	}
	return 0;
}