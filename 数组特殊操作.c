#include<stdio.h>
#define N 9
int main()
{
	int a[N],b[N+1],ax[N];
	int i, j, m;

	printf("������N��������N=9��\n");
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);
	}
	printf("�����ԭ����Ϊ��");
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	printf("����һ�����֣�ʹ�����еĺ�X���ΪǰX�������������ƶ�X�XΪ����������֣�");
	scanf_s("%d", &m);
	for (i = N - m, j = 0; i < N; i++, j++) /*������ת����*/
	{
		b[j] = a[i];
	}
	for (i = 0; i < N - m; i++) /*������������еĺ�N��*/
	{
		ax[i + m] = a[i];
	}
	for (i = 0; i < m; i++)
	{
		ax[i] = b[i];
	}
	
	printf("���º������Ϊ��");
	for (i = 0; i < N; i++)
		printf("%d ", ax[i]);
	return 0;
}