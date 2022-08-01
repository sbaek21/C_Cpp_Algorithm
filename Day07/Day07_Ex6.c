#include <stdio.h>

int main(void) {

	/*
	* 다 풀면 songa.kim@kakao.com으로 보내기
	* 1~199 사이에 있는 3의 배수 출력
	* 3 = 3 * 1
	* 6 = 3 * 2
	* 9 = 3 * 3
	* 12 = 3 * 4
	* ...
	* 102...
	* 3 * ㅁ < 199
	* for (int i  = 1; 조건식에는 i * 30 이런식으로 하지말기;  ) {
	* 
	* }
	*/

	for (int i = 1; 3 * i < 199; i++) {
		printf("%d\n", 3 * i);
	}
	return 0;
}