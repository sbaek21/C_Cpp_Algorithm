//#include <stdio.h>
//
//int apple = 0; // 함수 밖에
//
//void change() {
//	apple = 10;
//
//	int banana = 20;
//}
//
///*
//	전역 변수
//	지역 변수
//	정적 변수 (static)
//*/
//
//int main() {
//	int banana = 0; // 함수 안에
//	apple = 5;
//	printf("%d", apple); // 5
//
//	banana = 7;
//	printf("%d", banana); // 7
//
//	change();
//	printf("%d", apple); // 10
//	printf("%d", banana); // 7
//
//	return 0;
//}