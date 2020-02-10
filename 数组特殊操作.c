#include<stdio.h>
#define N 9
int main()
{
	int a[N],b[N+1],ax[N];
	int i, j, m;

	printf("请输入N个整数（N=9）\n");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("输入的原数列为：");
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("输入一个数字，使得数列的后X项变为前X项，并将数列向后移动X项（X为你输入的数字）");
	scanf_s("%d", &m);
	for (i = N - m, j = 0; i < N; i++, j++) /*设置中转数列*/
	{
		b[j] = a[i];
	}
	for (i = 0; i < N - m; i++) /*将其放入新数列的后N项*/
	{
		ax[i + m] = a[i];
	}
	for (i = 0; i < m; i++)
	{
		ax[i] = b[i];
	}
	
	printf("更新后的数列为：");
	for (i = 0; i < N; i++)
		printf("%d ", ax[i]);
	return 0;
}