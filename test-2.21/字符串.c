#include<stdio.h>

int main() {
	//char�ַ�����
	char ch1 = 'a';//�ַ�
	char ch2 = "abcD1";//�ַ��� \0���ַ����Ľ�����־,�ַ������涼������һ��\0
	char arr1[] = "abc";//ռ4���ռ䣬��\0
	char arr2[] = { 'a','b','c' };//ռ3���ռ䣬û��\0
	printf("%s\n", arr1);
	printf("%s\n", arr2);//û��\0��ֹ���ж�ģ�ֱ���ڴ����ҵ�\0ֹͣ���ַ�'a','b','c' �����'\0'����
	int len1 = strlen(arr1);
	int len2 = strlen(arr2);
	printf("%d\n", len1);//��ȥ\0 3
	printf("%d\n", len2);//û��\0,ֱ���ڴ����ҵ�\0ֹͣ ���
	return 0;
}