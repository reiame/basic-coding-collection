#include<stdio.h>
int main()
{
	int a[10][10];
	int i, j;
	for (i = 0; i < 10; i++) /*初始化第一列全部为1*/
	{
		a[i][0] = 1;
	}
	for (j = 0; j < 10; j++)
	{
		for (i = 1; i < 10; i++) /*初始化第一行除第一个数以外全部为0*/
		{
			a[j][i] = 0;
		}
	}
	for (j = 1; j < 10; j++)
	{
		for (i = j; i < 10; i++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1]; /*注意到杨辉三角的一个特点为等于数列上一行同列和上一行上一列的数值和*/
		}
	}
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i][j] == 0) /*不输出为零的项*/
				printf("        ");
			else
			{
				printf("%8d",a[i][j]);
			}
			
		}
		printf("\n");
	}
}