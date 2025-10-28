#include <stdio.h>
#include <conio.h>
int main() {
    printf("Name- Akshat Singh Rawat\nSAP_ID-590028778\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n, i, largest, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    largest = second = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if(a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }
    printf("Second largest number = %d\n", second);
    getch();
    return 0;
}
