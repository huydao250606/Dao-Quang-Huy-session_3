#include <stdio.h>

int main() {
    float toan, van, anh, tong, trungbinh;

    // Yeu cau nguoi dung nhap diem
    printf("Nhap diem mon Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem mon Van: ");
    scanf("%f", &van);

    printf("Nhap diem mon Anh: ");
    scanf("%f", &anh);

    // Tinh tong diem va diem trung binh
    tong = toan + van + anh;
    trungbinh = tong / 3;

    // Hien thi ket qua
    printf("Tong diem: %.2f\n", tong);
    printf("Diem trung binh: %.2f\n", trungbinh);

    return 0;
}
