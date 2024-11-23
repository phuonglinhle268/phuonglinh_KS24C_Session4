#include <stdio.h>

int main() {
	float soDienCu, soDienMoi, soTieuThu, tienDien;
	printf("Nhap so dien cu: ");
	scanf("%f", &soDienCu);
	printf("Nhap so dien moi: ");
	scanf("%f", &soDienMoi);
	
	soTieuThu = soDienMoi - soDienCu;
	
	if (soTieuThu < 0) {
		printf("Chi so moi nho hon chi so cu. Hay nhap lai\n");
		return 1;
		
	if (soTieuThu < 50) {
		tienDien = soTieuThu * 10000;
	} else if (50 <= soTieuThu && soTieuThu < 100) {
		tienDien = 49 * 10000 + (soTieuThu - 49) * 15000;
	} else if (100 <= soTieuThu && soTieuThu < 150) {
		tienDien = 49 * 10000 + 50 * 15000 + (soTieuThu - 99) * 20000;
	} else if (150 <= soTieuThu && soTieuThu < 200) {
		tienDien = 49 * 10000 + 50 * 15000 + 50 * 20000 + (soTieuThu - 149) * 25000;
	} else {
		tien dien = 49 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soTieuThu - 199) * 30000;
	}
	
	printf("So dien tieu thu trong thang la : %.2f kWh\n", soTieuThu);
	printf("Tien dien phai tra la : %.2f dong\n", tienDien);
	
	return 0;
		
}
