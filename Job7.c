#include <stdio.h>

int main() {
    // 1. ประกาศอาเรย์คะแนนสอบและตัวแปรที่จำเป็น
    int scores[5];
    int i;
    int total = 0;
    float average;
    int max, min;

    printf("========================================\n");
    printf("      Lesson 5: Classroom Score Analyzer    \n");
    printf("========================================\n");

    // 2. วนลูปรับข้อมูลคะแนนของนักเรียน 5 คน
    for(i = 0; i < 5; i++) {
        printf("Enter score for student %d (0-100): ", i + 1);
        scanf("%d", &scores[i]);
    }

    // ตั้งค่าสูงสุด/ต่ำสุดเริ่มต้นโดยใช้คะแนนคนแรก
    max = scores[0];
    min = scores[0];

    // 3. วนลูปประมวลผลหาผลรวม ค่าสูงสุด และค่าต่ำสุด
    for(i = 0; i < 5; i++) {
        total += scores[i]; // หาผลรวม

        if(scores[i] > max) {
            max = scores[i]; // หาค่าสูงสุด
        }

        if(scores[i] < min) {
            min = scores[i]; // หาค่าต่ำสุด
        }
    }

    // คำนวณหาค่าเฉลี่ย (ทำ Type Casting เป็น float)
    average = (float)total / 5;

    // 4. แสดงผลการวิเคราะห์คะแนนสถิติรายชื่อนักเรียน
    printf("========================================\n");
    printf("          GRADE & STATISTICS            \n");
    printf("========================================\n");

    for(i = 0; i < 5; i++) {
        char grade = (scores[i] >= 50) ? 'P' : 'F';
        printf("Student %d\t:\tScore = %d\tGrade = %c\n", i + 1, scores[i], grade);
    }

    printf("========================================\n");
    printf("Total Score\t:\t%d\n", total);
    printf("Average Score\t:\t%.2f\n", average);
    printf("Maximum Score\t:\t%d\n", max);
    printf("Minimum Score\t:\t%d\n", min);
    printf("========================================\n");

    return 0;
}