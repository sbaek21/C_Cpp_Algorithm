#include <stdio.h>

int main(void) {

	int num = 2;
	int num2 = num++ + 2; // 2 + 2 = 4
						  // num = 3
	int num3 = --num + 1; // (num = 2) 3
	
	printf("num++ = %d\n", num++); // 2
	printf("++num2 = %d\n", ++num2); // 5
	printf("num3-- = %d\n", num3--); // 3 (num3는 출력 후에 2로 바뀜)

	return 0;
}