#include <stdio.h>
#include <stdlib.h>

struct Books {
    int BookID;
    char BookTitle[50];
} ComputerBook;

void DisplayData(struct Books *CBook);

int main() {
    printf("Enter Book ID :");
    scanf("%d", &ComputerBook.BookID);
    printf("Enter Book Title :");
    scanf("%s", ComputerBook.BookTitle);
    DisplayData(&ComputerBook);
    return 0;
}

void DisplayData(struct Books *CBook) {
    printf("Book ID : %d \n", (*CBook).BookID);
    printf("Book Title : %s \n", CBook->BookTitle);
}


//(*CBook).BookID คือ pointer ที่เก็บที่อยู่ของ struct ไม่ใช่ตัวข้อมูลโดยตรง ดังนั้นต้องใส่ * ครอบไว้ก่อน เพื่อบอกว่าเปิดเข้าไปที่ตัว struct จริงๆ แล้วค่อยใช้ . ตามด้วยชื่อ member ที่ต้องการ ในที่นี้คือ BookID
//CBook->BookTitle คือ การใช้ arrow operator เข้าถึง member BookTitle ผ่าน pointer CBook
