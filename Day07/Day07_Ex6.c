#include <stdio.h>

int main(void) {

	/*
	* �� Ǯ�� songa.kim@kakao.com���� ������
	* 1~199 ���̿� �ִ� 3�� ��� ���
	* 3 = 3 * 1
	* 6 = 3 * 2
	* 9 = 3 * 3
	* 12 = 3 * 4
	* ...
	* 102...
	* 3 * �� < 199
	* for (int i  = 1; ���ǽĿ��� i * 30 �̷������� ��������;  ) {
	* 
	* }
	*/

	for (int i = 1; 3 * i < 199; i++) {
		printf("%d\n", 3 * i);
	}
	return 0;
}