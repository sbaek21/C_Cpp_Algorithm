#include <stdio.h>
#include <stdlib.h> // ǥ�� ���̺귯��

int main() {
	int num = 10;
	scanf_s("%d", &num); // �迭 ĭ ��

	int* arr = malloc(sizeof(int) * num); // �� ĭ ũ�� * ĭ ��
	// = int arr[num];�� ���� �Ҵ�
	for (int i = 0; i < num; i++) {
		// arr[0] [1] [2] [3] ... [10]
		//		1	2	3	4		11	: i + 1
		//		10	20	30	40			: (i + 1) * 10
		arr[i] = (i + 1) * 10;
		printf("%d\n", arr[i]);
		
	}

	return 0;
}