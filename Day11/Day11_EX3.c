#include <stdio.h>

// getGPA(0~100)
// ~90 : return A
// 89 ~ 80 : return B
// 79 ~ 70 : return C 
// 69 ~ : return F
// return 'A', 'B', 'C', 'F'

int global = 0; // ���� ����

char getGPA(int score) {

	int sum = score + global;

	if (score >= 90) {
		return 'A';
	} else if (score >= 80) {
		return 'B';
	} else if (score >= 70) {
		return 'C';
	} else {// 69~
		return 'F';
	}
}

int main() {
	int num = 97;
	char GPA = getGPA(num);
	char globalGPA = getGPA(global);
	// �Ű������� ���������� ����.
	printf("�� ������ %c �Դϴ�.\n", GPA);
	printf("�� ������ %c �Դϴ�.", globalGPA);
	return 0;
}