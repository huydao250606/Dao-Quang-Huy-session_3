#include <stdio.h>

int main() {
    float canh_day, chieu_cao, dientich;

    // Yeu cau nguoi dung nhap canh day va chieu cao
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &canh_day);

    printf("Nhap chieu cao cua tam giac: ");
    scanf("%f", &chieu_cao);

    // Tinh dien tich tam giac
    dientich = 0.5 * canh_day * chieu_cao;

    // Hien thi ket qua
    printf("Dien tich tam giac la: %.2f\n", dientich);

    return 0;
}
