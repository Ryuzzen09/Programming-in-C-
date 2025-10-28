#include <stdio.h>
#include <conio.h>

int main() {
printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMultiplication Table of %d:\n", num);
    for(i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    getch();
    return 0;
}
