#include<stdio.h>
#define Total 10
int main()
{
	int a[Total - 1];
	int b[Total];
	int i, j, k, l, temp;
	printf("������N��������N=9��\n");
	for (i = 0; i < Total - 1; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("��ѡ�������������������ż������������������\n"); /*���ڲ�֪�����⣬�Ͱ���������Ϊ���û���ʼ����*/
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
	printf("��Ŀǰ������Ϊ��");
	for (i = 0; i < Total - 1; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < Total - 1; i++)
	{
		b[i] = a[i];
	}
	printf("�������Ҫ��ӵ�����\n");
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
	printf("��Ŀǰ������Ϊ��");
	for (i = 0; i < Total; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");

}