#include<stdio.h>
int main() {
	//����
	int a = 20;
	printf("%d\n", a);
	//�ַ��� 
	char ch = 'a';
	printf("%c\n", ch);
	//������
	float b = 1.11;
	printf("%lf\n", b);
	double c = 2.22;
	printf("%f\n", c);

	//sizeof �ؼ��֣������� �������ͻ������ռ�ռ��С 
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	return 0;
}   