#include <stdio.h>

int j = 1; // 전역변수는 초기화를 안해도,
		   // 0으로 자동 초기화

void local() {
	int count = 1; // 변수를 선언 & 초기화
	static int static_count = 1; // 선언 & 초기화 딱 한번만 된다

	printf("count = %d\n", count++);
	printf("static_count = %d\n", static_count++);
} // count는 메모리에서 사라짐

void global() {
	printf("global j = %d\n", j++);
} //j는 메모리에 그대로 있다


int main() {

	//int i = 0; // 지역변수는 초기화를 안하면, 값이 X.
	////printf("%d", i);
	//printf("%d", j);

	for (int k = 0; k < 3; k++) {//3바퀴
		local(); // 1 1 1
		global();
	}

	return 0;
}