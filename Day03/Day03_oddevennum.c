#include <stdio.h>
/* <����>
		int num �Է� �ް�, scanf_s
		num�� ¦���̸�, "¦���Դϴ�."
		2, 4, 6, 8, 10, 100, 222, 420, ...
		= 2�� ��������
		= 2�� ������ �������� 0
		num�� Ȧ���̸�, "Ȧ���Դϴ�."
		1, 3, 5, 7, 11, ..., 1117, ...
		= 2�� ������ �� �������� �ʴ´�
		= 2�� ������ �������� 1
*/
int main(void) {

	int num;
	scanf_s("%d", &num);
	//printf("%d", num); // �� ������ Ȯ��

	// int nameoji = num % 2;
	 
	if (num % 2 == 0) { // ¦��
		printf("¦���Դϴ�.");
	}
	else { // Ȧ��
		printf("Ȧ���Դϴ�.");
	}
	

}