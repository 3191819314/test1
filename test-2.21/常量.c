#include<stdio.h>
#define MAX 100
#define STR "abcd123"
int main() {
	//1.���泣��
	10;
	3.14;
	'a';//�����ű�ʾ�����ַ�
	"Aw1c";//˫���ű�ʾ�ַ���

	//2.const���εĳ�����
	const int a2 = 10;//const���εĳ�����,�����Ǳ����������ܱ��޸ģ��г���������,������
	int a1 = 10;
	a1 = 20;//a1=20��
	//a2 = 20;�޷����¸�ֵ

	//3.define����ı�ʶ������(����һ�����ţ�����ʱ�Զ��滻�����ֵ)�����ܱ��޸�
	//#define MAX 100
	//#define STR "abcd123"
	int a = MAX;
	printf("%d\n", MAX);//100
	printf("%d\n", a);//100
	printf("%s\n", STR);//abcd123

	//4.ö�ٳ���
	enum color {
		RED,//0��λ��
		GREEN, //1
		BLUE//2
	};
	printf("%d", GREEN);//���λ�ú� 1
	return 0;
}