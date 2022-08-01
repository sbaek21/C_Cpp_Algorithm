#include <stdio.h>

int main() {

	/*
		잔액 조회를 원하시면 7번을 입력하세요.
		입금을 원하시면 1번을 입력하세요.
		출금을 원하시면 2번을 입력하세요.
		종료를 원하시면 0번을 입력하세요.
		1
		입금하실 금액을 입력하세요
		5000
		입금 완료 되었습니다.
		잔액 조회를 원하시면 7번을 입력하세요.
		입금을 원하시면 1번을 입력하세요.
		출금을 원하시면 2번을 입력하세요.
		종료를 원하시면 0번을 입력하세요.
		2
		출금하실 금액을 입력하세요
		10000
		출금완료 되었습니다. / (잔액이 부족합니다.)
		반복..
	*/
	int left = 5000;
	int input;
	int output;
	int num;

	while (1) {
		printf("잔액 조회를 원하시면 7번을 입력하세요.\n");
		printf("입금을 원하시면 1번을 입력하세요.\n");
		printf("출금을 원하시면 2번을 입력하세요.\n");
		printf("종료를 원하시면 0번을 입력하세요.\n");
		scanf_s("%d", &num);
		if (num == 1) {
			printf("입금하실 금액을 입력하세요.\n");
			scanf_s("%d", &input);
			printf("입금 완료 되었습니다.\n");
		}
		else if (num == 7) {
			printf("잔액은 %d 입니다.\n", left + input);
		}
		else if (num == 2) {
			printf("출금하실 금액을 입력하세요.\n");
			scanf_s("%d", &output);
		}
		else {
			printf("종료 되었습니다.");
			break;
		}
	}
	return 0;
}