#include <stdio.h>
int main()
{
	int x;
	scanf("%d", &x); 
	int a, b, c;
	a = x / 100;
	b = x % 100 / 10;
	c = x % 10;
	for (int i = 0;i < a;i++)
	{
		printf("B");
	}
	for (int i = 0;i < b;i++)
	{
		printf("S");
	}
	for (int i = 1;i <= c;i++)
	{
		printf("%d", i);
	}
	getch();
	return 0;
}
