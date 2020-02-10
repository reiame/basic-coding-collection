#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
void submps(char *s1, char *s2, int len)
{
	int i, j, m = 0;
	int p, q;
	int length = strlen(s2);
	char a[100] = { 0 };
	char b[100] = { 0 };
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < length; j++)
		{
			strcpy(a, "0");
			p = i;
			q = j;
			while (s1[p] == s2[q] && s1[p] != 0)
			{
				a[m] = s2[q];
				p++;
				q++;
				m++;
			}
			if (strlen(a) > strlen(b))
			{
				strcpy(b, a);
			}
			m = 0;
		}
	}
	if (b[0]!= '0') 
	{
		printf("%s\n", b);
	}
	else printf("无重复部分\n");
}

int main()
{
	char str1[81] = { 0 };
	char str2[81] = { 0 };
	int len;

	printf("请输入字符串1：");
	scanf("%s", str1);
	printf("请输入字符串2：");
	scanf("%s", str2);

	len = strlen(str1) <= strlen(str2) ? strlen(str1) : strlen(str2);
	if (len == strlen(str1))
	{
		submps(str1, str2, len);
	}
	else if (len == strlen(str2))
	{
		submps(str2, str1, len);
	}

	return 0;
}
