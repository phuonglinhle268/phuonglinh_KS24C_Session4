#include <stdio.h>

int kiem_tra_nam(int year) {
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
		return 1;
	}
	return 0;
}

int kiem_tra_ngay(int day, int month, int year) {
	if (month < 1 || thang > 12) {
		return 0;
	}
	if (month == 2) {
		if (kiem_tra_nam(year)) {
			if (day < 1 || day > 29);
			return 0;
		} else {
			if (day < 1 || day > 28);
			return 0;
		}
	} else if (month == 4 || month == 6 || month 9 || month == 11) {
		if (day < 1 || day > 30);
		return 0;
	} else {
		if (day < 1 || day > 31);
		return 0;
	}
	return 1;
}

int main() {
	int day, month, year;
	printf("Nhap ngay : ");
	scanf("%d", &day);
	printf("Nhap thang : ");
	scanf("%d", &month);
	printf("Nhap nam : ");
	scanf("%d", &year);
	
	if (kiem_tra_ngay(day, month, year)) {
		printf("Ngay %d/%d/%d hop le.\n", day, month, year);
	} else {
		printf("Ngay %d/%d/%d khong hop le.\n", day, month, year);
	}
	
	return 0;
}
