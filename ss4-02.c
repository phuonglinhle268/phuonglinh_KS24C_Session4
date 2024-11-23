#include <stdio.h>

int main() {
	int so_nguyen;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d", &so_nguyen);
	
	if (so_ngyen % 2 ==0) {
		printf("So ban nhap la so chan.\n");
	} else {
		printf("So ban nhap la so le.\n");
	}
	
	return 0;
} 
