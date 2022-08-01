//#include <stdio.h>
//
//// 구조체 선언
//struct student {
//	char name[30]; // 크기가 30인 name 이름
//	int age; // 나이
//};
//
//int main() {
//	struct student apple[3]; // student 변수를 3개 배열
//	int i = 0;
//	while (i < 3) { // 3바퀴만 돌게 만들어주세요.
//			printf("이름을 입력하세요.");
//			scanf_s("%s", apple[i].name, 30);
//
//			printf("나이를 입력하세요.");
//			scanf_s("%d", &apple[i].age);
//	
//		if (apple[i].age == 0) { // 나이가 0살이면,
//			break;
//		}
//
//		printf("학생의 이름은 %s이고, 나이는 %d살입니다.\n", apple[i].name, apple[i].age);
//		i = i + 1;
//	}
//	return 0;
//}