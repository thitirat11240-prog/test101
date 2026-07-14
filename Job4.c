#include <stdio.h>

int main() {
    float net_income;
    float tax = 0.0;

    printf("=============================================\n");
    printf("    Lesson 3: Secure Tax Calculator App      \n");
    printf("=============================================\n");

    // รับข้อมูลรายได้สุทธิจากผู้เสียภาษี
    printf("Enter your Annual Net Income (THB): ");
    scanf("%f", &net_income);

    // กระบวนการคัดกรองความถูกต้องและคำนวณโครงสร้างเงินภาษีขั้นบันได
    if (net_income < 0) {
        // ดักจับข้อมูลผิดพลาด (Data Validation)
        printf("\n[ALERT] Error: Invalid Income!\n");
    }
    else if (net_income <= 150000) {
        // ช่วงที่ 1 : ได้รับสิทธิยกเว้นภาษี
        tax = 0.0;
        printf("\nStatus: Tax Exempted.\n");
    }
    else if (net_income <= 300000) {
        // ช่วงที่ 2 : มีการเก็บ 5% จากส่วนเกิน 150,000
        tax = (net_income - 150000) * 0.05;
        printf("\nStatus: Tax Rate 5%% Applied.\n");
    }
    else {
        // ช่วงที่ 3 : อัตราภาษี 10% (ฐานสะสม 7,500 + จากยอดเกิน 300,000)
        tax = 7500.0 + ((net_income - 300000) * 0.10);
        printf("\nStatus: Tax Rate 10%% Applied.\n");
    }

    // แสดงผลลัพธ์เฉพาะเมื่อข้อมูลเข้าถูกต้องตามเงื่อนไข
    if (net_income >= 0) {
        printf("Total Income Tax Payable: %.2f THB\n", tax);
        printf("=============================================\n");
    }

    return 0;
}