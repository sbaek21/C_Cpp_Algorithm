#include <stdio.h>

int main() {
	/*
		���� 3���� �Է�
		���� ū ���� ���
		�Է�: 3 5 1
		���: 5

		�Է�: 70 70 80
		���: 80

		�Է�: 6 6 6
		���: 6
		
		�Է�: 100 1 101
		���: 101

		�Է�: -30 70 10
		���: 70

		�Է�: -1 0 1
		���: 1

		�Է�: -7 -5 -3
		���: -3
	*/
	int num1;
	int num2;
	int num3;

	printf("���� 3���� �Է��ϼ���.");
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