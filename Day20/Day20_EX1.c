#include <stdio.h>

int main() {
	//int num = 10;
	//int num[] = { 10, 20, 30 };

	//char c = 'a';
	//char c[] = { 'a', 'b', 'c' };

	//char s[] = "apple";
	//// = {'a', 'p', 'p', 'l', 'e'};

	//char* s = "apple";
	//char* s[] = { "apple", "banana" }; //���ڿ� ������ ���� �� []�� ����.
	//char s[][] = { "apple", "banana" }; //���� �ڵ�� ����.

	//char* bts[7]; //���� ���� �Ǿ����� �� ��� 0
				  // ���� �Է� X
	char bts[10][7];
	for (int i = 0; i < 7; i++) {
		scanf_s("%s", &bts[i][7]);
		printf("%s", i);
	}
	


	return 0;
}