#include <stdio.h>

int main() {

	// ���ڿ� �Է�
	char word[6];
	int i, length;
	scanf_s("%s", word, 6);
	length = sizeof(word);
		for (int i = 0; i < length / 2; i++) {
			if (word[i] != word[length - i - 1]) {
				printf("ȸ���� �ƴմϴ�.");
			} else {
				printf("ȸ���Դϴ�.");
			}
			break;
		}


	return 0;
}