/*
    จงแปลงตัวเลขที่ผู้ใช้ป้อนเข้ามาให้กลายเป็นตัวหนังสือ เช่น ผู้ใช้กรอกว่า 3 ให้แสดงผลลัพธ์ว่า Three
    (กำหนดให้สามารถกรอกเลขได้แค่ 0 ถึง 30 เท่านั้น)
    (กำหนดให้ใช้คำสั่ง switch case เท่านั้น)
    
    Test case:
        User input :
            12
    Output:
        Twelve

    Test case:
        User input :
            4
    Output:
        Four
*/
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number (0 to 30): ");
    scanf("%d", &number);

    if (number < 0 || number > 30) {
        printf("Invalid input. Please enter a number between 0 and 30.\n");
        return 1;
    }

    switch (number) {
   case 0:
            printf("Zero");
            break;
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        case 10:
            printf("Ten");
            break;
        case 11:
            printf("Eleven");
            break;
        case 12:
            printf("Twelve");
            break;
        case 13:
            printf("Thirteen");
            break;
        case 14:
            printf("Fourteen");
            break;
        case 15:
            printf("Fifteen");
            break;
        case 16:
            printf("Sixteen");
            break;
        case 17:
            printf("Seventeen");
            break;
        case 18:
            printf("Eighteen");
            break;
        case 19:
            printf("Nineteen");
            break;
        case 20:
            printf("Twenty");
            break;
        case 21:
            printf("Twenty-One");
            break;
        case 22:
            printf("Twenty-Two");
            break;
        case 23:
            printf("Twenty-Three");
            break;
        case 24:
            printf("Twenty-Four");
            break;
        case 25:
            printf("Twenty-Five");
            break;
        case 26:
            printf("Twenty-Six");
            break;
        case 27:
            printf("Twenty-Seven");
            break;
        case 28:
            printf("Twenty-Eight");
            break;
        case 29:
            printf("Twenty-Nine");
            break;
        case 30:
            printf("Thirty");
            break;
        default:
            printf("Number out of range (0 to 30).");

    }

    return 0;
}
