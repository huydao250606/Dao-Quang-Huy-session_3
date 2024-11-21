#include <stdio.h>
#define PI 3.14159 // Dinh nghia hang so PI

int main() {
    float r, chuvi, dientich;

    // Yeu cau nguoi dung nhap ban kinh
    printf("Vui long nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    // Tinh chu vi va dien tich
    chuvi = 2 * PI * r;
    dientich = PI * r * r;

    // Hien thi ket qua voi 2 so thap phan
    printf("Chu vi hinh tron: %.2f\n", chuvi);
    printf("Dien tich hinh tron: %.2f\n", dientich);

    return 0;
}
