#include <stdio.h>

int main() {
    // Khai b�o v� khoi tao hai bien so nguy�n
    int soNguyen1 = 15; // Bien so nguy�n thu nhat
    int soNguyen2 = 25; // Bien so nguy�n thu hai

    // Khai b�o mot bien kh�c de luu tru ket qua tong
    int tong;

    // T�nh tong cua hai so nguy�n v� luu v�o bien `tong`
    tong = soNguyen1 + soNguyen2;

    // In ket qua ra m�n h�nh
    printf("Tong cua %d va %d la: %d\n", soNguyen1, soNguyen2, tong);

    return 0;
}

