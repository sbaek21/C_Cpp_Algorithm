#include <stdio.h>
#include <stdlib.h> // 표준 라이브러리

int main() {
	int num = 10;
	scanf_s("%d", &num); // 배열 칸 수

	int* arr = malloc(sizeof(int) * num); // 한 칸 크기 * 칸 수
	// = int arr[num];를 동적 할당
	for (int i = 0; i < num; i++) {
		// arr[0] [1] [2] [3] ... [10]
		//		1	2	3	4		11	: i + 1
		//		10	20	30	40			: (i + 1) * 10
		arr[i] = (i + 1) * 10;
		printf("%d\n", arr[i]);
		
	}

	return 0;
}