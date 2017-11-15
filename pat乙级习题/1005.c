#include <stdio.h>
int main()
{
	int a[200];
	int b[250] = {0};
	int c[200];
	int d[200];
	int cnt = 0;
	int index;
	scanf("%d", &index);
	for (int i = 0;i < index;i++)
	{
		scanf("%d", &a[i]);
		d[i] = a[i];
	}
	for (int i = 0;i < index;i++)
	{
		while (a[i] != 1)
		{
			if (a[i] % 2 == 0)
			{
				if (b[a[i] / 2]++)
					break;
				a[i] /= 2;
			}
			else
			{
				if (b[(a[i] * 3 + 1) / 2]++)
					break;
				a[i] = (a[i] * 3 + 1) / 2;
			}
		}		
	}
	for (int i = 0;i < index;i++)
	{
		if (b[d[i]] == 0)
		{
			c[cnt] = d[i];
			cnt++;
		}
	}
	int temp;
	for (int i = 0;i < cnt;i++)
	{
		for (int j = i+1;j < cnt;j++)
		{
			if (c[i] < c[j])
			{
				temp = c[j];
				c[j] = c[i];
				c[i] = temp;
			}
		}
	}
	for (int i = 0;i < cnt - 1;i++)
		printf("%d ", c[i]);
	printf("%d", c[cnt - 1]);
	return 0;
}
