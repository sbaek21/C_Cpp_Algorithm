#include <stdio.h>

int main() {
	//int num = 10;
	//int num[] = { 10, 20, 30 };

	//char c = 'a';
	//char c[] = { 'a', 'b', 'c' };

	//char s[] = "apple";
	//// = {'a', 'p', 'p', 'l', 'e'};

	//char* s = "apple";
	//char* s[] = { "apple", "banana" }; //문자열 여러개 받을 때 []를 쓴다.
	//char s[][] = { "apple", "banana" }; //위의 코드와 같다.

	//char* bts[7]; //값이 선언 되어있을 때 출력 0
				  // 값을 입력 X
	char bts[10][7];
	for (int i = 0; i < 7; i++) {
		scanf_s("%s", &bts[i][7]);
		printf("%s", i);
	}
	


	return 0;
}