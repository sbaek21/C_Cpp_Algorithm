//#include <stdio.h>
//
//int main() {
//
//	int money = 10000;
//	int menu = 0;
//	int menu1;
//	int menu2;
//	int menu3;
//	int choice;
//	
//	while (1) {
//		printf("메뉴를 선택하세요. 1. 아이스 아메리카노 3000원 2.라떼 4500원 3.카페 모카 5000원\n");
//		scanf_s("%d", &menu);
//		if (menu = 1) {
//			menu1 = 3000;
//			printf("3000원입니다. 결제하시겠습니까?\n");
//			scanf_s("%d", &choice);
//			if (choice = 1 && money - menu1 > 0) {
//				printf("결제 완료되었습니다.\n");
//			} else if (choice = 1 && money - menu1 < 0) {
//				printf("잔액이 부족합니다.\n");
//			} else if (choice = 2) {
//				printf("결제를 하지 않아 주문이 되지 않았습니다.\n");
//			}
//		}else if (menu = 2) {
//			menu2 = 4500;
//			printf("4500원입니다. 결제하시겠습니까?\n");
//			if (choice = 1 && money - menu2 > 0) {
//				printf("결제 완료되었습니다.\n");
//			} else if (choice = 1 && money - menu2 < 0) {
//				printf("잔액이 부족합니다.\n");
//			} else if (choice = 2) {
//				printf("결제를 하지 않아 주문이 되지 않았습니다.\n");
//			}
//		} else if (menu = 3) {
//			menu3 = 50000;
//			printf("5000원입니다. 결제하시겠습니까?\n");
//			if (choice = 1 && money - menu3 > 0) {
//				printf("결제 완료되었습니다.\n");
//			} else if (choice = 1 && money - menu3 < 0) {
//				printf("잔액이 부족합니다.\n");
//			} else if (choice = 2) {
//				printf("결제를 하지 않아 주문이 되지 않았습니다.\n");
//			}
//		}
//		break;
//
//	}
//
//	return 0;
//}