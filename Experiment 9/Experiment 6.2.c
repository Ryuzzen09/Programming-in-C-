#include <stdio.h>
#include <conio.h>
int main() {
    printf("Name- Akshat Singh Rawat\nSAP_ID-590028778\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int n, i, pos=0, neg=0, odd=0, even=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] >= 0) pos++; else neg++;
        if(a[i] % 2 == 0) even++; else odd++;
    }
    printf("Positive: %d\nNegative: %d\nEven: %d\nOdd: %d\n", pos, neg, even, odd);
    getch();
    return 0;
}
