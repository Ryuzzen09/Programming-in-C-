#include <stdio.h>
#include <conio.h>
int main() {
    printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
    int num;
    char choice;
    int countPos = 0, countNeg = 0, countZero = 0;
    do {
        printf("Enter an integer: ");
        scanf("%d", &num);

        if (num > 0) {
            countPos++;
        } else if (num < 0) {
            countNeg++;
        } else {
            countZero++;
        }
        printf("Do you want to enter another? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("\nResults:\n");
    printf("Positive numbers: %d\n", countPos);
    printf("Negative numbers: %d\n", countNeg);
    printf("Zeroes: %d\n", countZero);
    getch();
    return 0;
}
