#include <stdio.h>

int j = 1; // ���������� �ʱ�ȭ�� ���ص�,
		   // 0���� �ڵ� �ʱ�ȭ

void local() {
	int count = 1; // ������ ���� & �ʱ�ȭ
	static int static_count = 1; // ���� & �ʱ�ȭ �� �ѹ��� �ȴ�

	printf("count = %d\n", count++);
	printf("static_count = %d\n", static_count++);
} // count�� �޸𸮿��� �����

void global() {
	printf("global j = %d\n", j++);
} //j�� �޸𸮿� �״�� �ִ�


int main() {

	//int i = 0; // ���������� �ʱ�ȭ�� ���ϸ�, ���� X.
	////printf("%d", i);
	//printf("%d", j);

	for (int k = 0; k < 3; k++) {//3����
		local(); // 1 1 1
		global();
	}

	return 0;
}