#include<stdio.h>
#define MAX 100
#define STR "abcd123"
int main() {
	//1.字面常量
	10;
	3.14;
	'a';//单引号表示单个字符
	"Aw1c";//双引号表示字符串

	//2.const修饰的常变量
	const int a2 = 10;//const修饰的常变量,本质是变量，但不能被修改，有常量的属性,但不是
	int a1 = 10;
	a1 = 20;//a1=20了
	//a2 = 20;无法重新赋值

	//3.define定义的标识符常量(定义一个符号，遇到时自动替换定义的值)，不能被修改
	//#define MAX 100
	//#define STR "abcd123"
	int a = MAX;
	printf("%d\n", MAX);//100
	printf("%d\n", a);//100
	printf("%s\n", STR);//abcd123

	//4.枚举常量
	enum color {
		RED,//0号位置
		GREEN, //1
		BLUE//2
	};
	printf("%d", GREEN);//输出位置号 1
	return 0;
}