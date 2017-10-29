﻿/*
答案正确”是自动判题系统给出的最令人欢喜的回复。本题属于PAT的“答案正确”大派送 —— 只要读入的字符串满足下列条件，系统就输出“答案正确”，否则输出“答案错误”。

得到“答案正确”的条件是：

1. 字符串中必须仅有P, A, T这三种字符，不可以包含其它字符；
2. 任意形如 xPATx 的字符串都可以获得“答案正确”，其中 x 或者是空字符串，或者是仅由字母 A 组成的字符串；
3. 如果 aPbTc 是正确的，那么 aPbATca 也是正确的，其中 a, b, c 均或者是空字符串，或者是仅由字母 A 组成的字符串。

现在就请你为PAT写一个自动裁判程序，判定哪些字符串是可以获得“答案正确”的。
输入格式： 每个测试输入包含1个测试用例。第1行给出一个自然数n (<10)，是需要检测的字符串个数。接下来每个字符串占一行，字符串长度不超过100，且不包含空格。

输出格式：每个字符串的检测结果占一行，如果该字符串可以获得“答案正确”，则输出YES，否则输出NO。
	*/
#include <stdio.h>
#include <string.h>
int main()
{
	char c[100];
	int i, j, n;
	int count_P, count_A, count_T, pos_P, pos_T;
	scanf("%d\n", &n);
	for (i = 0;i<n;i++)
	{
		gets(c);
		count_P = 0;
		count_A = 0;
		count_T = 0;
		pos_P = 0;
		pos_T = 0;
		for (j = 0;j<strlen(c);j++)
		{
			if (c[j] == 'P')
			{
				count_P++;
				pos_P = j;
			}
			if (c[j] == 'A')
				count_A++;
			if (c[j] == 'T')
			{
				count_T++;
				pos_T = j;
			}
		}
		if (count_P + count_A + count_T != strlen(c) || pos_T - pos_P <= 1 || count_P>1 || count_T>1 || pos_P*(pos_T - pos_P - 1) != strlen(c) - pos_T - 1)
			printf("NO\n");
		else
			printf("YES\n");
	}