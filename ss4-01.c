#include <stdio.h>

int main() {
	int so_nguyen;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &so_nguyen);
	
	if (so_nguyen > 0) {
		printf("So ban nhap la so duong.\n");
	} else if (so_nguyen < 0) {
		printf("So ban nhap la so am.\n");
	} else {
		printf("So ban nhap la so 0.\n");
	}
	
	return 0;
} 
