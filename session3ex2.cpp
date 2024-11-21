#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Yeu cau nguoi dung nhap nhiet do Celsius
    printf("Vui long nhap nhiet do (do Celsius): ");
    scanf("%f", &celsius);

    // Chuyen doi Celsius sang Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Hien thi ket qua
    printf("Nhiet do tuong ung trong do Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
