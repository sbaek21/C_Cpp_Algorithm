#include <stdio.h>

/*
	Ctrl + s : ����
*/
int main(void) {

	int a = 100;
	printf("Hello\n");
	printf("%d\n", a);// decimal = %d
	
	// ���� ���� b 300, ���
	int b = 300;
	printf("%d\n", b);
	//Enterġ�� ���� ��: \n (a.k.a) ��������
	/* [�ڷ���]
	* �������� ����
	* char : ���� 1���� ex: char apple = 'a'; char banana = 'B';
	* short, int, long, long long : ���� ex. int num = 3;
	* float, double, long double : �Ǽ� ex. double pie = 3.14;
	*/
	/*********************************/
	// char c, int i, double d �� ����
	// 'C', -123, 1.23

	char c = 'C'; // %c = ���� �ϳ��� ����� ��
	int i = -123; // %d
	double d = 1.23; // %f
	printf("char c�� %c �Դϴ�.\n", c);
	printf("int i�� %d\n", i);
	printf("double d�� %0.2f\n", d);//%�� f ���̿� 0.2 = �Ҽ��� ���ڸ������� �����ش�
	/************************/
	int num1 = 5; // num1 = 5
	num1 = 7; // num1 = 7
	num1 = 100; // num1 = 100

	int num2 = 200; //num2 = 200
	num1 = num2; // num1 = 200

	int num3 = 300;
	int num4 = 400;
	num3 = num4;
	//���⼭ num3�� ���� ����ϸ�? 400
	//���⼭ num4�� ���� ����ϸ�? 400
	
	/*
		int number1, number2;
		    1111     2222
		int temp;
		    0
		����. temp�� �̿��ؼ� number 1�� ���� number 2�� ���� �ٲ��!
	*/
	int number1 = 1111;
	int number2 = 2222;
	int temp = 0;
	
	temp = number1;// temp : 1111
	number1 = number2; // number1 : 2222
	number2 = temp; //number2 : 1111
	
	printf("number1 : %d\n", number1);
	printf("number2 : %d\n", number2);

	printf("number1 : %d, number2 : %d\n", number1, number2);

	/*
		char p 'P', double marathon 42.195
		printf(); P, 42.195
	*/
	char p = 'P';
	double marathon = 42.195;
	printf("%c, %0.3f", p, marathon);//0.3 = �Ҽ��� ���ڸ�����

	return 0;
}