#include <stdio.h>
#include <string.h>
#include <ctype.h>
#pragma warning(disable:4996)
void fun(char a[], char b[])
{
	int i;
	for (i = strlen(a) - 1; i >= 0; i--)
		if ((i == 0 || !isalpha(a[i - 1])) && isalpha(a[i]))
		{
			strcat(b, &a[i]);
			strcat(b, " ");
			if (i)
				a[i - 1] = 0;
		}
}
int main() 
{
	char a[81];
	char b[81];
	gets(a);
	int i;
	for (i = 0; i < 10; i++)
		b[i] = 0;
	fun(a, b);
	puts(b);
}