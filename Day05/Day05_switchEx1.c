#include <stdio.h>
int main(void) {

	/* <문제>
	* int score = 50;
	* scanf_s로 score 입력
	* 
	* switch문으로,
	* 50이면 "반타작"
	* 100이면 "만점"
	* 0이면 "빵점"
	* 출력
	*/

	int score; // 선언
	scanf_s("%d", &score);
	switch (score) {
		case 50: 
			printf("반타작");
			break;
		case 100:
			printf("만점");
			break;
		case 0:
			printf("빵점");
			break;
		default:
			printf("이도 저도 아니네요.");
	}
	//위와 똑같은 역할 하는 if문 만들기
	if (score == 100) {
		printf("만점");
	} else if (score == 50) {
		printf("반타작");
	} else if (score == 0) {
		printf("빵점");
	} else {
		printf("이도 저도 아니네요.");
	}
	return 0;
}
