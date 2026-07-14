#include <stdio.h>

int main() {
    // ประกาศตัวแปรเพื่อเก็บข้อมูลจากการรับค่า
    int age;
    float gpa;

    // ส่วนที่ 1: แสดงข้อมูลประวัติส่วนตัวพื้นฐาน
    printf("=============================================\n");
    printf("           MY PERSONAL PROFILE               \n");
    printf("=============================================\n");
    printf("Name\t:\tthitirat sarika\n");
    printf("Major\t:\tInformation Technology\n");
    printf("=============================================\n\n");

    // ส่วนที่ 2: รับค่าข้อมูลผ่านคีย์บอร์ด
    printf("Enter your age (Integer): ");
    scanf("%d", &age);

    printf("Enter your GPA (Float): ");
    scanf("%f", &gpa);

    // ส่วนที่ 3: แสดงผลสรุปข้อมูลที่รับเข้ามา
    printf("\n=============================================\n");
    printf("             PROFILE SUMMARY                 \n");
    printf("=============================================\n");
    printf("Your Age\t:\t%d years old\n", age);
    printf("Your GPA\t:\t%.2f\n", gpa);
    printf("=============================================\n");

    return 0;
}