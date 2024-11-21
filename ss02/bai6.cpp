#include <stdio.h>

int main() {
    // Khai báo hang so PI và bán kính hình tròn
    const float PI = 3.14; // Hang so PI
    float banKinh = 5.0;   // Bán kính hình tròn 

    // Khai báo bien de luu ket qua chu vi và dien tích
    float chuVi;
    float dienTich;

    // Tính toán chu vi và di?n tích
    chuVi = 2 * PI * banKinh;          
    dienTich = PI * banKinh * banKinh; 

    // In ket qua ra màn hình
    printf("Ban kinh hinh tron: %.2f\n", banKinh);
    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}

