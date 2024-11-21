#include <stdio.h>

int main() {
    // Khai báo và khoi tao hai bien so nguyên
    int soNguyen1 = 5; // Bien so nguyên thu nhat
    int soNguyen2 = 5; // Bien so nguyên thu hai

    // Khai báo các bien de luu ket qua
    int tong;   // Luu ket qua tong
    int hieu;   // Luu ket qua hieu
    int tich;   // Luu ket qua tich
    float thuong; // Luu ket qua thuong (dùng float de luu ket qua có phan thap phân)

    // Tinh toán các ket qua
    tong = soNguyen1 + soNguyen2;          // Tính tong
    hieu = soNguyen1 - soNguyen2;          // Tính hieu
    tich = soNguyen1 * soNguyen2;          // Tính tích
    thuong = (float)soNguyen1 / soNguyen2; // Tính thuong (ép kieu sang float)

    // In các ket qua ra màn hình
    printf("Tong cua %d va %d la: %d\n", soNguyen1, soNguyen2, tong);
    printf("Hieu cua %d va %d la: %d\n", soNguyen1, soNguyen2, hieu);
    printf("Tich cua %d va %d la: %d\n", soNguyen1, soNguyen2, tich);
    printf("Thuong cua %d va %d la: %.2f\n", soNguyen1, soNguyen2, thuong);

    return 0;
}

