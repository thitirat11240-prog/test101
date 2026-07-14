#include <stdio.h>

int main() {
    int multiplication_table;
    int i;

    printf("========================================\n");
    printf("      Multiplication Table Generator    \n");
    printf("========================================\n");

    // 1. รับค่าหมายเลขสูตรคูณจากผู้ใช้
    printf("Enter the multiplication table number: ");
    scanf("%d", &multiplication_table);

    printf("\n--- Table of %d ---\n", multiplication_table);

    // 2. ใช้ for loop ในการวนซ้ำตั้งแต่ 1 ถึง 12
    for(i = 1; i <= 12; i++) {
        // 3. คำนวณและแสดงผลตารางแม่
        printf("%d x %d = %d\n", multiplication_table, i, multiplication_table * i);
    }

    printf("========================================\n");
    return 0;
}