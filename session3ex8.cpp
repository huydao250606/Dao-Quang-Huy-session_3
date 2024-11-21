#include <stdio.h>

int main() {
    int so, nghich_dao = 0;

    // Yeu cau nguoi dung nhap so nguyen 4 chu so
    printf("Nhap so nguyen co 4 chu so: ");
    scanf("%d", &so);

    // Tinh so nghich dao
    while (so != 0) {
        nghich_dao = nghich_dao * 10 + so % 10;  // Lay chu so cuoi cung va them vao so nghich dao
        so /= 10;                                 // Bo chu so cuoi cung
    }

    // In ket qua
    printf("So nghich dao la: %d\n", nghich_dao);

    return 0;
}
