#include <stdio.h>

int main() {
    // Khai b�o v� khoi tao hai bien so nguy�n
    int soNguyen1 = 5; // Bien so nguy�n thu nhat
    int soNguyen2 = 5; // Bien so nguy�n thu hai

    // Khai b�o c�c bien de luu ket qua
    int tong;   // Luu ket qua tong
    int hieu;   // Luu ket qua hieu
    int tich;   // Luu ket qua tich
    float thuong; // Luu ket qua thuong (d�ng float de luu ket qua c� phan thap ph�n)

    // Tinh to�n c�c ket qua
    tong = soNguyen1 + soNguyen2;          // T�nh tong
    hieu = soNguyen1 - soNguyen2;          // T�nh hieu
    tich = soNguyen1 * soNguyen2;          // T�nh t�ch
    thuong = (float)soNguyen1 / soNguyen2; // T�nh thuong (�p kieu sang float)

    // In c�c ket qua ra m�n h�nh
    printf("Tong cua %d va %d la: %d\n", soNguyen1, soNguyen2, tong);
    printf("Hieu cua %d va %d la: %d\n", soNguyen1, soNguyen2, hieu);
    printf("Tich cua %d va %d la: %d\n", soNguyen1, soNguyen2, tich);
    printf("Thuong cua %d va %d la: %.2f\n", soNguyen1, soNguyen2, thuong);

    return 0;
}

