#include <stdio.h>

int main() {
    // In tieu de cua bang
    printf("----------------------------------------------------------------------\n");
    printf("| STT | Ho va ten      | Tuoi | So dien thoai  | email                |\n");
    printf("----------------------------------------------------------------------\n");

    // Duyet qua danh sach sinh vien va in ra tung dong
    for (int i = 1; i <= 10; i++) {
        // Tao du lieu cho tung sinh vien
        char ten = 'A' + (i - 1);            // Ten: Nguyen Van A, B, C,...
        int tuoi = 18 + (i % 5);             // Tuoi: Xoay quanh 18 den 22
        char email_ky_tu = 'a' + (i - 1);   // Email: anv, bnv,...

        // In thong tin tung sinh vien
        printf("| %-3d | Nguyen Van %-3c | %-4d | 0904488848%-2d | %cngv@rikkeiacademy.com |\n",
               i, ten, tuoi, i, email_ky_tu);

        // In gach ngang sau moi dong
        printf("----------------------------------------------------------------------\n");
    }

    return 0;
}
