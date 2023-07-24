/*
	输出响铃
*/

#include <stdio.h>

/* 输出响铃 */
void put_alert(void)
{
	putchar('\a');
}

int main(void)
{
	int i;
	int no;

	printf("输出响铃的次数：");
	scanf("%d", &no);

	for (i = 0; i < no; i++)
		put_alert();

	return 0;
}
