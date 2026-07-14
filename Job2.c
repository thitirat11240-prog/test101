#include <stdio.h>

int main() {
    // ประกาศตัวแปรตามชนิดข้อมูลที่โจทย์กำหนด
    float total_income;
    float total_expenses;
    int num_of_days;

    float net_remaining;
    float daily_average;

    printf("=============================================\n");
    printf("        Lesson 2: Budget Statistics Tool     \n");
    printf("=============================================\n");

    // ส่วนรับข้อมูลจากผู้ใช้งาน
    printf("Enter Total Income (THB): ");
    scanf("%f", &total_income);

    printf("Enter Total Expenses (THB): ");
    scanf("%f", &total_expenses);

    printf("Enter Number of Days in this month: ");
    scanf("%d", &num_of_days);

    // ส่วนประมวลผลคณิตศาสตร์และการทำ Type Casting
    net_remaining = total_income - total_expenses;

    // ทำ Type Casting ที่ตัวแปร num_of_days เพื่อให้ผลหารไม่ถูกปัดเศษจำนวนเต็ม
    daily_average = net_remaining / (float)num_of_days;

    // ส่วนแสดงผลลัพธ์ทศนิยม 2 ตำแหน่ง
    printf("\n=============================================\n");
    printf("               BUDGET REPORT                 \n");
    printf("=============================================\n");
    printf("Net Remaining Money\t:\t%.2f THB\n", net_remaining);
    printf("Daily Average Remaining\t:\t%.2f THB/Day\n", daily_average);
    printf("=============================================\n");

    return 0;
}