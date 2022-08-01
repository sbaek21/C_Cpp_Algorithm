#include <stdio.h>

int main() {

	// 문자열 입력
	char word[6];
	int i, length;
	scanf_s("%s", word, 6);
	length = sizeof(word);
		for (int i = 0; i < length / 2; i++) {
			if (word[i] != word[length - i - 1]) {
				printf("회문이 아닙니다.");
			} else {
				printf("회문입니다.");
			}
			break;
		}


	return 0;
}