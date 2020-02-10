#include<stdio.h>
int main()
{
	int a[17];
	int i, k, l, ut = 0;

	for (i = 0; i < 17; i++) /*输入17个人的编号*/
	{
		a[i] = i + 1;
	}
	
	k = 1, l = 0;/*k是报的数字，而l是实际在队列内的号码*/
	for (; ut == 0 ; k++)
	{
		if (k == 3) /*数到三，则打印出该编号，然后令该编号为0*/
		{	
			printf("%d\n",a[l]);
			a[l] = 0;
			k = 0;			
		}
		ut = 1;
		if (l == 16)
		{
			l = 0;
		}
		else
		{
			l++;
		}
		for (i = 0; i < 17; i++)/*是否所有编号都已经为0，即所有人都已出列？*/
		{
			if (a[i] != 0)
				ut = 0;
		}
	}
}