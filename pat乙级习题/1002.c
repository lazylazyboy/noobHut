/*
����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��10^100��

�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
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