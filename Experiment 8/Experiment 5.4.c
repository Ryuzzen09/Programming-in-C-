#include <stdio.h>
#include <conio.h>
void counter() {
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}
int main() {
    printf("Name- Akshat Singh Rawat\nSAP_ID-590028778\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    counter();
    counter();
    counter();
    getch();
    return 0;
}
