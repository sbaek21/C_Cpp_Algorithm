#include <stdio.h>
#include <string.h>

int main() {

	char arr[6];
	scanf("%s", arr); // �迭 �̸� == �迭 �ּ��̱� ������ & �Ƚᵵ ��
	
	int size = strlen(arr); // ���ڿ� ���� ��ȯ
	int result = 0;

	for (int i = 0; i < size / 2; i++) { // �ݸ� ��
		if (arr[i] == arr[size - 1 - i];) {
			result = result + 1;
		}
	}

	if (result == size / 2) {//result �� ����?
		printf("ȸ���Դϴ�.");
	} else {
		printf("ȸ���� �ƴմϴ�.");
	}

	return 0;
}