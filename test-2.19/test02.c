#include<stdio.h>
int a = 10;//全局变量
int main() {
	printf("%d\n", a);//输出10
	int a = 100;//局部变量
	//全局变量与局部变量冲突时局部变量优先
	printf("%d\n", a);//输出100

	return 0;
}
