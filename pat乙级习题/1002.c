/*
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10^100。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
	*/
#include <stdio.h>
#include <string.h>
int main() {
	int sum = 0;
	char num[100];
	scanf("%s", num);
	for (int i = 0;num[i] != '\0';i++)
	{
		sum += (num[i] - '0');
	}
	char a[][12] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	if (sum < 10)
	{
		printf("%s", a[sum]);
	}
	else if (sum < 100 && sum >= 10)
	{
		printf("%s %s", a[sum / 10], a[sum % 10]);
	}
	else
	{
		printf("%s %s %s", a[sum / 100], a[sum % 100 / 10], a[sum % 10]);
	}
	getch();
	return 0;
}