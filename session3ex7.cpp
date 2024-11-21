#include <stdio.h>

int main() {
    int so, tong = 0;

    // Yeu cau nguoi dung nhap so nguyen 4 chu so
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &so);

    // Tinh tong cac chu so
    while (so != 0) {
        tong += so % 10;  // Lay chu so cuoi cung va cong vao tong
        so /= 10;          // Bo chu so cuoi cung
    }

    // In ket qua
    printf("Tong cac chu so trong so la: %d\n", tong);

    return 0;
}
