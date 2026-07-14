#include <stdio.h>

int main() {
    // 1. กำหนดข้อมูลเริ่มต้นในอาเรย์ที่มี 8 มิติ
    int data[8] = {12, 45, 78, 23, 56, 89, 34, 67};
    int search_key;
    int i;
    int found_flag = 0; // ตัวแปรสถานะใช้เช็คว่าพบข้อมูลหรือไม่ (0=ไม่เจอ, 1=เจอ)

    printf("========================================\n");
    printf("      Array Linear Search Calculator    \n");
    printf("========================================\n");

    // 2. รับค่าคีย์ที่ต้องการค้นหา
    printf("Enter a number to search: ");
    scanf("%d", &search_key);

    // 3. วนลูปเพื่อตรวจสอบค้นหาข้อมูลทีละช่อง
    for(i = 0; i < 8; i++) {
        if(data[i] == search_key) {
            printf("\n🎯 Target Found! [ %d ] is at Index: %d\n", search_key, i);
            found_flag = 1; // เปลี่ยนสถานะเป็นเจอแล้ว
            break;          // ค้นพบแล้วหยุดลูปทันทีเพื่อประสิทธิภาพ
        }
    }

    // 4. กรณีวนลูปจบแล้วยังไม่เจอเป้าหมายข้อมูล
    if(found_flag == 0) {
        printf("\n❌ Data not found! [ %d ] does not exist in the array.\n", search_key);
    }

    printf("========================================\n");
    return 0;
}