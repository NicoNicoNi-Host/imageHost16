/*
	求两个整数值的平均值
*/

#include <stdio.h>

/* 以实数的形式返回a和b的平均值 */
double ave2(int a, int b)
{
	return (double)(a + b) / 2;
}

int main(void)
{
	int n1, n2;

	puts("请输入两个整数。");
	printf("整数1 :");   scanf("%d", &n1);
	printf("整数2 :");   scanf("%d", &n2);

	printf("平均值是%.1f。\n", ave2(n1, n2));

	return 0;
}
