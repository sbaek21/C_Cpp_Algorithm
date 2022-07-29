#include <stdio.h>

/*
	Ctrl + s : 저장
*/
int main(void) {

	int a = 100;
	printf("Hello\n");
	printf("%d\n", a);// decimal = %d
	
	// 정수 변수 b 300, 출력
	int b = 300;
	printf("%d\n", b);
	//Enter치고 싶을 때: \n (a.k.a) 역슬래시
	/* [자료형]
	* 데이터의 형태
	* char : 문자 1개씩 ex: char apple = 'a'; char banana = 'B';
	* short, int, long, long long : 정수 ex. int num = 3;
	* float, double, long double : 실수 ex. double pie = 3.14;
	*/
	/*********************************/
	// char c, int i, double d 만 쓴다
	// 'C', -123, 1.23

	char c = 'C'; // %c = 문자 하나씩 출력할 때
	int i = -123; // %d
	double d = 1.23; // %f
	printf("char c는 %c 입니다.\n", c);
	printf("int i는 %d\n", i);
	printf("double d는 %0.2f\n", d);//%와 f 사이에 0.2 = 소수점 두자리까지만 보여준다
	/************************/
	int num1 = 5; // num1 = 5
	num1 = 7; // num1 = 7
	num1 = 100; // num1 = 100

	int num2 = 200; //num2 = 200
	num1 = num2; // num1 = 200

	int num3 = 300;
	int num4 = 400;
	num3 = num4;
	//여기서 num3의 값을 출력하면? 400
	//여기서 num4의 값을 출력하면? 400
	
	/*
		int number1, number2;
		    1111     2222
		int temp;
		    0
		문제. temp를 이용해서 number 1의 값과 number 2의 값을 바꿔라!
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
	printf("%c, %0.3f", p, marathon);//0.3 = 소수점 세자리까지

	return 0;
}