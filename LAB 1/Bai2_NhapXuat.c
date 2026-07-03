#include <stdio.h>

int main() {
    // 1. Khai báo các biến để lưu trữ thông tin
    char mssv[50];
    char ho_ten[100];
    int nam_sinh;
    int tuoi;
    float diem_tb;

    // 2. Nhập dữ liệu từ bàn phím
    printf("Nhap Ma so sinh vien (MSSV): ");
    scanf("%s", mssv); 
    
    // Xóa bộ nhớ đệm để tránh bị trôi lệnh nhập chuỗi tiếp theo
    while (getchar() != '\n'); 

    printf("Nhap Ho va Ten: ");
    scanf("%[^\n]", ho_ten); // Đọc toàn bộ chuỗi cho đến khi gặp phím Enter

    printf("Nhap Nam Sinh: ");
    scanf("%d", &nam_sinh);

    printf("Nhap Diem Trung Binh: ");
    scanf("%f", &diem_tb);

    // 3. Tự động tính toán số tuổi dựa trên năm hiện tại là 2026
    tuoi = 2026 - nam_sinh;

    // 4. Xuất dữ liệu ra màn hình theo đúng định dạng mẫu yêu cầu
    printf("\n"); // In dòng trống cho thoáng
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", ho_ten);
    printf("Nam sinh: %d\n", nam_sinh);
    printf("Tuoi: %d\n", tuoi);
    
    // %.2f để định dạng hiển thị 2 chữ số thập phân cho điểm trung bình
    printf("Diem Trung Binh: %.2f\n", diem_tb); 

    return 0;
}
