//#include <stdio.h>
//
//// ����ü ����
//struct student {
//	char name[30]; // ũ�Ⱑ 30�� name �̸�
//	int age; // ����
//};
//
//int main() {
//	struct student apple[3]; // student ������ 3�� �迭
//	int i = 0;
//	while (i < 3) { // 3������ ���� ������ּ���.
//			printf("�̸��� �Է��ϼ���.");
//			scanf_s("%s", apple[i].name, 30);
//
//			printf("���̸� �Է��ϼ���.");
//			scanf_s("%d", &apple[i].age);
//	
//		if (apple[i].age == 0) { // ���̰� 0���̸�,
//			break;
//		}
//
//		printf("�л��� �̸��� %s�̰�, ���̴� %d���Դϴ�.\n", apple[i].name, apple[i].age);
//		i = i + 1;
//	}
//	return 0;
//}