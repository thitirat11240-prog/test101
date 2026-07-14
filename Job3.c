#include <stdio.h>

int main() {
    float net_income, social_security;
    float final_income = 0.0;
    float tax = 0.0;

    printf("=== Upgraded Tax Calculator with Deduction ===\n");

    printf("Enter Annual Net Income (THB): ");
    scanf("%f", &net_income);

    printf("Enter Social Security Premium Paid (THB): ");
    scanf("%f", &social_security);

    // 1. ตรวจสอบความถูกต้องของข้อมูลนำเข้า
    if (net_income < 0 || social_security < 0) {
        printf("\n[ERROR] Invalid Inputs detected.\n");
    }
    else {

        // 2. หักค่าประกันสังคมไม่เกิน 9,000 บาท
        if (social_security > 9000) {
            social_security = 9000; // Cap ค่าหักลดหย่อนสูงสุด
            printf("[INFO] Social Security deduction capped at 9,000 THB.\n");
        }

        // 3. คำนวณรายได้สุทธิหลังหักค่าประกันสังคม
        final_income = net_income - social_security;

        if (final_income < 0)
            final_income = 0; // ป้องกันผลลัพธ์ติดลบหลังหักลดหย่อน

        // 4. คำนวณภาษีจากรายได้สุทธิ
        if (final_income <= 150000) {
            tax = 0.0;
        }
        else if (final_income <= 300000) {
            tax = (final_income - 150000) * 0.05;
        }
        else {
            tax = 7500.0 + ((final_income - 300000) * 0.10);
        }

        // 5. แสดงผลสรุป
        printf("\n--- TAX SUMMARY ---\n");
        printf("Income after Deduction: %.2f THB\n", final_income);
        printf("Net Tax to Pay: %.2f THB\n", tax);
    }

    return 0;
}