#include <stdio.h>

int main() {
    int namSinh;

    printf("Ban hay nhap nam sinh: ");
    scanf("%d", &namSinh);

    // Thay 2026 bang nam hien tai de tinh tuoi chinh xac nhat
    printf("Ban sinh nam %d, ban da %d tuoi.\n", namSinh, 2026 - namSinh);

    return 0;
}