#include<stdio.h>
#define Total 10
int main()
{
	int a[Total - 1];
	int b[Total];
	int i, j, k, l, temp;
	printf("请输入N个整数（N=9）\n");
	for (i = 0; i < Total - 1; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("请选择升序或降序，升序请输入偶数，降序请输入奇数\n"); /*由于不知道题意，就把升降序设为由用户初始化了*/
	scanf_s("%d", &k);
	if (k % 2 == 0)
	{
		for (i = 0; i < Total - 1; i++)
		{
			for (j = 0; j < Total - 2; j++)
			{
				if (a[j] > a[j + 1])
				{
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		k = 1;
	}
	else
	{
		for (i = 0; i < Total - 1; i++)
		{
			for (j = 0; j < Total - 2; j++)
			{
				if (a[j] < a[j + 1])
				{
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
		k = 0;
	}
	printf("您目前的数列为：");
	for (i = 0; i < Total - 1; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < Total - 1; i++)
	{
		b[i] = a[i];
	}
	printf("请键入你要添加的数字\n");
	scanf_s("%d", &l);
	b[9] = l;

	if (k == 1)
	{
		for (i = 0; i < Total; i++)
		{
			for (j = 0; j < Total - 1; j++)
			{
				if (b[j] > b[j + 1])
				{
					temp = b[j];
					b[j] = b[j + 1];
					b[j + 1] = temp;
				}
			}
		}
	}
	else
	{
		for (i = 0; i < Total; i++)
		{
			for (j = 0; j < Total; j++)
			{
				if (b[j] < b[j + 1])
				{
					temp = b[j];
					b[j] = b[j + 1];
					b[j + 1] = temp;
				}
			}
		}
	}
	printf("您目前的数列为：");
	for (i = 0; i < Total; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");

}