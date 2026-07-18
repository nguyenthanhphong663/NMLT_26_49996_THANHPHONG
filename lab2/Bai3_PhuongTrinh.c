#include <stdio.h>

int main() {
    // Khai báo biến kiểu số thực (float) để kết quả chia có phần thập phân
    float a, b, x;

    // 1. Nhập hệ số a và b
    printf("Nhap he so a (a khac 0): ");
    scanf("%f", &a);
    
    printf("Nhap he so b: ");
    scanf("%f", &b);

    // 2. Tính nghiệm x
    x = -b / a;

    // 3. Hiển thị kết quả (làm tròn 2 chữ số thập phân)
    printf("Nghiem cua phuong trinh la: x = %.2f\n", x);

    return 0;
}