#include <stdio.h>
int main(void) {

	/* <����>
	* int score = 50;
	* scanf_s�� score �Է�
	* 
	* switch������,
	* 50�̸� "��Ÿ��"
	* 100�̸� "����"
	* 0�̸� "����"
	* ���
	*/

	int score; // ����
	scanf_s("%d", &score);
	switch (score) {
		case 50: 
			printf("��Ÿ��");
			break;
		case 100:
			printf("����");
			break;
		case 0:
			printf("����");
			break;
		default:
			printf("�̵� ���� �ƴϳ׿�.");
	}
	//���� �Ȱ��� ���� �ϴ� if�� �����
	if (score == 100) {
		printf("����");
	} else if (score == 50) {
		printf("��Ÿ��");
	} else if (score == 0) {
		printf("����");
	} else {
		printf("�̵� ���� �ƴϳ׿�.");
	}
	return 0;
}
