#include<stdio.h>

int main() {
	//char字符类型
	char ch1 = 'a';//字符
	char ch2 = "abcD1";//字符串 \0是字符串的结束标志,字符串后面都隐藏了一个\0
	char arr1[] = "abc";//占4个空间，有\0
	char arr2[] = { 'a','b','c' };//占3个空间，没有\0
	printf("%s\n", arr1);
	printf("%s\n", arr2);//没有\0终止，有多的，直到内存中找到\0停止，字符'a','b','c' 后面加'\0'即可
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	printf("%d\n", len1);//除去\0 3
	printf("%d\n", len2);//没有\0,直到内存中找到\0停止 随机
	return 0;
}