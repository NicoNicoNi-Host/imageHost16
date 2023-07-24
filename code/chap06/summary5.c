/*
	复制数组a的元素
*/

#include <stdio.h>

#define  NUMBER		5		/* 元素个数 */

/* 将数组b开头的n个元素复制给数组a */
void cpy_ary(int a[], const int b[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		a[i] = b[i];
}

int main(void)
{
	int i;
	int v1[NUMBER];			/* 被复制的数组 */
	int v2[NUMBER];			/* 复制目标数组 */

	for (i = 0; i < NUMBER; i++) {
		printf("v1[%d]：", i);
		scanf("%d", &v1[i]);
	}

	cpy_ary(v2, v1, NUMBER);	/* 将v1的所有元素复制给v2 */

	puts("已将v1的所有元素复制给v2。\n");
	for (i = 0; i < NUMBER; i++) {
		printf("v2[%d]：%d\n", i, v2[i]);
	}

	return 0;
}
