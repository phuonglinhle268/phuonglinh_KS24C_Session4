#include <stdio.h>

int main() {
	int month;
	printf("Nhap so thang (1-12): ");
	scanf("%d", &month);
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Thang co 31 ngay.\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Thang co 30 ngay.\n");
			break;
		case 2:
			printf("Thang cos 28 hoac 29 ngay.\n");
			break;
		default:
			printf("Thang ban nhap khong hop le.\n");
	}
	
	return 0;
	
}
