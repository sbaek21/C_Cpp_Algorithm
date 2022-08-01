#include <stdio.h>
/* <문제>
		int num 입력 받고, scanf_s
		num이 짝수이면, "짝수입니다."
		2, 4, 6, 8, 10, 100, 222, 420, ...
		= 2로 나눠진다
		= 2로 나누면 나머지가 0
		num이 홀수이면, "홀수입니다."
		1, 3, 5, 7, 11, ..., 1117, ...
		= 2로 나눠도 딱 떨어지지 않는다
		= 2로 나누면 나머지가 1
*/
int main(void) {

	int num;
	scanf_s("%d", &num);
	//printf("%d", num); // 잘 들어갔는지 확인

	// int nameoji = num % 2;
	 
	if (num % 2 == 0) { // 짝수
		printf("짝수입니다.");
	}
	else { // 홀수
		printf("홀수입니다.");
	}
	

}