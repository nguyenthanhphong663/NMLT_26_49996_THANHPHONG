#include <stdio.h>

int main() {
    int toan, ly, hoa;
    float dtb;

    // 1. Nhập dữ liệu từ bàn phím
    printf("Nhap diem Toan: ");
    scanf("%d", &toan);
    
    printf("Nhap diem Ly: ");
    scanf("%d", &ly);
    
    printf("Nhap diem Hoa: ");
    scanf("%d", &hoa);

    // 2. Tính điểm trung bình và ép kiểu
    // Ép tổng sang số thực (float) trước khi chia cho 6
    dtb = (float)(toan * 3 + ly * 2 + hoa) / 6;

    // 3. Hiển thị kết quả làm tròn 2 chữ số sau dấu phẩy
    printf("Diem trung binh cua sinh vien la: %.2f\n", dtb);

    return 0;
}