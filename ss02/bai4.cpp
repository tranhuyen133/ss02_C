#include <stdio.h>

int main() {
    // Khai bao v� khoi tao bien canh cua h�nh vu�ng
    int canhHinhVuong = 5; // Chieu d�i canh cua h�nh vu�ng 

    // Khai b�o bien de luu ket qua chu vi v� dien t�ch
    int chuVi;
    int dienTich;

    // T�nh to�n chu vi v� dien t�ch
    chuVi = 4 * canhHinhVuong;          // C�ng thuc t�nh chu vi
    dienTich = canhHinhVuong * canhHinhVuong; // C�ng thuc t�nh dien t�ch

    // In ket qua ra m�n h�nh
    printf("Canh hinh vuong: %d\n", canhHinhVuong);
    printf("Chu vi hinh vuong: %d\n", chuVi);
    printf("Dien tich hinh vuong: %d\n", dienTich);

    return 0;
}

