#include <stdio.h>

int main() {
	int n1, n2, n3;
	// 1~9
	int num1 = 5;
	int num2 = 3;
	int num3 = 7;

	printf("���� 3���� �Է��ϼ���.\n");
	scanf_s("%d %d %d", &n1, &n2, &n3);
	printf("%d %d %d", n1, n2, n3);

	while (num1 != n1 && num2 == n2, num3 && n3) {
		if (num1 == n1 && num2 == n2 && num3 == n3) {
			printf("3S! ���ӿ��� �̰���ϴ�.");
		} else if (num1 != n1 && num2 == n2 && num3 == n3) {
			printf("2S");
		}
	}

	

	return 0;
}