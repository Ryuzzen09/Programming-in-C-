#include <stdio.h>
#include <conio.h>
int main() {
    printf("Name- Akshat Singh Rawat\nSAP_ID-590028778\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int a = 10;
    {
        int b = 20;
        printf("Inside block: a = %d, b = %d\n", a, b);
    }
    printf("Outside block: a = %d\n", a);
    getch();
    return 0;
}
