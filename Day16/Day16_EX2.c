#include <stdio.h>

int main() {
	/*
		정수 3개를 입력
		가장 큰 수를 출력
		입력: 3 5 1
		출력: 5

		입력: 70 70 80
		출력: 80

		입력: 6 6 6
		출력: 6
		
		입력: 100 1 101
		출력: 101

		입력: -30 70 10
		출력: 70

		입력: -1 0 1
		출력: 1

		입력: -7 -5 -3
		출력: -3
	*/
	int num1;
	int num2;
	int num3;

	printf("정수 3개를 입력하세요.");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	if (num1 > num2 && num1 > num3) {
		printf("%d", num1);
	} else if (num1 > num2 && num3 < num1) {
		printf("%d", num3);
	} else if (num1 == num2 && num1 > num3 && num2 > num3) {
		printf("%d", num1);
	} else if (num2 == num3 && num2 > num1 && num3 > num1) {
		printf("%d", num2);
	} else if (num1 == num2 == num3) {
		printf("%d", num1);
	} else if (num2 > num1 && num2 > num3) {
		printf("%d", num2);
	} else if (num3 > num2 && num3 > num1) {
		printf("%d", num3);
	}

	return 0;
}