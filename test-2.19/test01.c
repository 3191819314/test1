#include<stdio.h>
int main() {
	//整型
	int a = 20;
	printf("%d\n", a);
	//字符型 
	char ch = 'a';
	printf("%c\n", ch);
	//浮点型
	float b = 1.11;
	printf("%lf\n", b);
	double c = 2.22;
	printf("%f\n", c);

	//sizeof 关键字，操作符 计算类型或变量所占空间大小 
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	return 0;
}   