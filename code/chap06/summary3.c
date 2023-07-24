/*
	以实数的形式返回数组a的所有元素的平均值
*/

#include <stdio.h>

#define  NUMBER		5		/* 元素个数 */

/* 以实数的形式返回数组a的所有元素的平均值 */
double ave_ary(const int a[], int n)
{
	int i;
	double sum = 0;

	for (i = 0; i < n; i++)
		sum += a[i];
	return sum / n;
}

int main(void)
{
	int i;
	int v[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("v[%d]：", i);
		scanf("%d", &v[i]);
	}

	printf("所有元素的平均值是%.1f。\n", ave_ary(v, NUMBER));

	return 0;
}
