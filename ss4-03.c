#include <stdio.h>

int main() {
	int so_nguyen;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &so_nguyen);
	
	if (so_nguyen % 3 ==0 && so_nguyen % 5 == 0) {
		printf("So ban nhap chia het cho ca 3 va 5.\n");
	} else if (so_nguyen % 3 == 0) {
		printf("So ban nhap chia het cho 3.\n");
	} else if (so_nguyen % 5 == 0) {
		printf("So ban nhap chia het cho 5.\n");
	} else {
		printf("So ban nhap khong chia het cho ca 3 va 5.\n");
	}
	
	return 0;
} 
