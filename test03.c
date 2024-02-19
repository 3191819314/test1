#include<stdio.h>
int main() {
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("请输入要相加的两个数：");
	scanf_s("%d %d", &a, &b);
	sum = a + b;
	printf("sum= %d\n", sum);
	return 0;
}