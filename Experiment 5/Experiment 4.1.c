#include <stdio.h>
#include <conio.h>

int main() {\
 printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");

    int num, pos = 0, neg = 0, zero = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        (num > 0) ? pos++ : (num < 0) ? neg++ : zero++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("\nTotal Positive Numbers: %d", pos);
    printf("\nTotal Negative Numbers: %d", neg);
    printf("\nTotal Zeroes: %d", zero);

    getch();
    return 0;
}
