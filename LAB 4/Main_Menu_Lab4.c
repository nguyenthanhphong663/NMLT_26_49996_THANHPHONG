#include <stdio.h>
#include <math.h>
int main(){
    int chon ;
    do
    {
        printf("\n+----------------------------------------------+\n");
        printf("|           MENU CHUONG TRINH LAB 4              |\n");
        printf("+------------------------------------------------+\n");
        printf("| 1. Tinh trung binh tong cac so chia het cho 2  |\n");
        printf("| 2. Kiem tra so nguyen to                       |\n");
        printf("| 3. Kiem tra so chinh phuong                    |\n");
        printf("| 4. Thoat chuong trinh                          |\n");
        printf("+-------------------------------------------------+\n");
        printf(">> Xin moi chong chuc nang (1-4): ");
        scanf("%d", &chon);
switch (chon) {
        case 1: { // Thêm dấu { để bọc khối lệnh trong case 1
            printf("\n--- CHUC NANG 1: TINH TRUNG BINH TONG CAC SO CHIA HET CHO 2 ---\n");
            int min, max;
            int tong = 0;
            int biendem = 0;

            printf("Nhap gia tri min: ");
            scanf("%d", &min);
            printf("Nhap gia tri max: ");
            scanf("%d", &max);

            if (min > max) {
                printf("Loi ky thuat: Gia tri min (%d) khong duoc lon hon max (%d)!\n", min, max);
            } else {
                for (int i = min; i <= max; i++) {
                    if (i % 2 == 0) {
                        tong += i;
                        biendem++;
                    }
                }
                
                if (biendem > 0) {
                    float trungbinh = (float)tong / biendem; // Đã sửa (float)
                    printf("Tong so chia het cho 2 trong khoang [%d, %d]: %d\n", min, max, tong);
                    printf("So luong cac so chia het cho 2: %d\n", biendem);
                    printf("=> Gia tri trung binh cong: %.2f\n", trungbinh);
                } else {
                    printf("Thong bao: Trong khoang [%d, %d] khong co so nao chia het cho 2.\n", min, max);
                }
            }
            break;
            case 2:{
                printf("\n--- CHUC NAG 2: KIEM TRA SO NGUYEN TO ---\n");
                int x;
                printf("Nhap vao so nguyen x: ");
                scanf("%d", &x);
                if (x < 2) {
                    printf("Ket luan: KHONG PHAI LA SO NGUYEN TO.\n", x);
                        }else{
                            int songuyento = 1;
                        for (int i = 2; i < x; i++) {
                            if (x% i == 0){
                                songuyento = 0;
                                break;
                        }
                    }
                    if (songuyento == 1){
                        printf("Ket luan: %d LA so nguyen to.\n", x);
                        break;
                        }else{
                            printf("Ket luan: %d KHONG PHAI la so nguyen to.\n", x);
                            break;
                        }
                    }
                }
                case 3:{
                    printf("\n--- CHUC NANG 3: KIEM TRA SO CHINH PHUONG ---\n");
                int x;
                printf("Nhap vao so nguyen x: ");
                scanf("%d", &x);

                int sochinhphuong = 0;
                for (int i = 1; i <= x; i++) {
                    if (i * i == x) {
                        sochinhphuong = 1;
                        break;
                    }
                }

                if (sochinhphuong == 1) {
                    printf("Ket luan: %d LA so chinh phuong.\n", x);
                } else {
                    printf("Ket luan: %d KHONG PHAI la so chinh phuong.\n", x);
                }
                break;
                }
        default:
        printf("\nLua chon khong hop le! Vui long chon tu 1 den 4.\n");
                    break;}
    } 
    
}while (chon !=4);
}
    