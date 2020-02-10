#pragma warning(disable:4996)
#include<stdio.h>
#include <string.h>
int main()
{
	int i = 0, j = 0, k = 0, t = 0, n = 0;
	char str[80] = { 0 };
	char words[20][20] = { 0 };
	char word[20] = { 0 };
	char tmp[20] = { 0 };
	gets(str);
	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (str[i] == ' ' && j == 0)
			{
				continue;
			}
			word[j++] = '\0';
			j = 0;
			strcpy(words[k++], word);
		}
		else
		{
			word[j++] = str[i];
		}
	}
	for (n = 0; n<k; n++)
	{
		for (i = 0; i<k - 1; i++)
		{
			if (strlen(words[i])>strlen(words[i + 1]))
			{
				strcpy(tmp, words[i]);
				strcpy(words[i], words[i + 1]);
				strcpy(words[i + 1], tmp);
			}
		}

	}
	for (n = 0; n<k; n++)
	{
		printf("第%d短的单词是%s\n", n + 1, words[n]);
	}
	return 0;
}
