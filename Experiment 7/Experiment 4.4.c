#include <stdio.h>
#include <conio.h>

int main() {
    printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
    float population = 100000;
    int year;

    for(year = 1; year <= 10; year++) {
        population = population + (population * 0.10);
        printf("Population at the end of year %d: %.0f\n", year, population);
    }

    getch();
    return 0;
}
