#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
void sort(char s[][11])
{
	int i, j;
	char tmps[11];
	for (i = 0; i<9; i++)
		for (j = i + 1; j<10; j++)
			if (strcmp(s[i], s[j])>0)
			{
				strcpy(tmps, s[i]);
				strcpy(s[i], s[j]);
				strcpy(s[j], tmps);
			}
}
int main()
{
	void sort(char s[][11]);
	char str[10][11];
	int i;
	for (i = 0; i<10; i++)
		scanf("%s", str[i]);
	sort(str);
	for (i = 0; i<10; i++)
		printf("%d:%s\n ", i+1 ,str[i]);
	printf("\n");
	return 0;
}
