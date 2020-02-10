#include <stdio.h>
#include <string.h>
#include <malloc.h>
#pragma warning(disable:4996)
int StrReplace(char strRes[], char from[], char to[])
{
	int i, flag = 0;
	char *p, *q, *ts;
	for (i = 0; strRes[i]; ++i)
	{
		if (strRes[i] == from[0])
		{
			p = strRes + i;
			q = from;
			while (*q && (*p++ == *q++));
			if (*q == '\0')
			{
				ts = (char *)malloc(strlen(strRes) + 1);
				strcpy(ts, p);
				strRes[i] = '\0';
				strcat(strRes, to);
				strcat(strRes, ts);
				free(ts);
				flag = 1;
			}
		}
	}
	return flag;
}
int main()
{
	char str1[80],str2[80],str3[80];
	gets(str1);
	gets(str2);
	gets(str3);
	printf("%s\n", str1);
	if (StrReplace(str1,str2 ,str3 )) printf("%s\n", str1);
	else printf("\n");
	return 0;
}