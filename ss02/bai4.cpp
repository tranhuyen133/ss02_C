#include <stdio.h>

int main() {
    // Khai bao và khoi tao bien canh cua hình vuông
    int canhHinhVuong = 5; // Chieu dài canh cua hình vuông 

    // Khai báo bien de luu ket qua chu vi và dien tích
    int chuVi;
    int dienTich;

    // Tính toán chu vi và dien tích
    chuVi = 4 * canhHinhVuong;          // Công thuc tính chu vi
    dienTich = canhHinhVuong * canhHinhVuong; // Công thuc tính dien tích

    // In ket qua ra màn hình
    printf("Canh hinh vuong: %d\n", canhHinhVuong);
    printf("Chu vi hinh vuong: %d\n", chuVi);
    printf("Dien tich hinh vuong: %d\n", dienTich);

    return 0;
}

