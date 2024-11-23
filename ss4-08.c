#include <stdio.h>

int main() {
	float a, b, c;
	printf("Nhap canh a : ");
	scanf("%f", &a);
	printf("Nhap canh b : ");
	scanf("%f", &b);
	printf("Nhap canh c : ");
	scanf("%f", &c);
	
	if (a + b > c && a + c > b && b + c > a) {
		printf("Day la 3 canh cua tam giac.\n", a, b, c);
	} else {
		printf("Day khong phai 3 canh tam giac.\n", a, b, c);
	}
	
	return 0;
}
