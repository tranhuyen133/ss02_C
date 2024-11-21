#include <stdio.h>

int main() {
    // Khai b�o hang so PI v� b�n k�nh h�nh tr�n
    const float PI = 3.14; // Hang so PI
    float banKinh = 5.0;   // B�n k�nh h�nh tr�n 

    // Khai b�o bien de luu ket qua chu vi v� dien t�ch
    float chuVi;
    float dienTich;

    // T�nh to�n chu vi v� di?n t�ch
    chuVi = 2 * PI * banKinh;          
    dienTich = PI * banKinh * banKinh; 

    // In ket qua ra m�n h�nh
    printf("Ban kinh hinh tron: %.2f\n", banKinh);
    printf("Chu vi hinh tron: %.2f\n", chuVi);
    printf("Dien tich hinh tron: %.2f\n", dienTich);

    return 0;
}

