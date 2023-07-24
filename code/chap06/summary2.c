/*
	记住上一次的值
*/

#include <stdio.h>

/* 记下no返回上一次的值 */
int val(int no)
{
	static int v;
	int temp = v;

	v = no;
	return temp;
}

int main(void)
{
	int retry;

	do {
		int n;

		printf("要记下的值：");
		scanf("%d", &n);
		printf("记下了。上一次的值是%d。\n", val(n));

		printf("是否继续？【Yes…0/NO…9】：");
		scanf("%d", &retry);
	} while (retry == 0);

	return 0;
}
