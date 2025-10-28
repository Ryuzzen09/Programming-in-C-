#include <stdio.h>
#include <conio.h>
int main() {
    printf("Name- Akshat Singh Rawat\nSAP_ID-590028778\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    int m, n, p, q, i, j, k;
    printf("Enter rows and columns of matrix A: ");
    scanf("%d%d", &m, &n);
    printf("Enter rows and columns of matrix B: ");
    scanf("%d%d", &p, &q);
    if(n != p) {
        printf("Matrix multiplication not possible (Incompatible dimensions)\n");
        return 0;
    }
    int A[m][n], B[p][q], C[m][q];
    printf("Enter elements of matrix A:\n");
    for(i = 0; i < m; i++) for(j = 0; j < n; j++) scanf("%d", &A[i][j]);
    printf("Enter elements of matrix B:\n");
    for(i = 0; i < p; i++) for(j = 0; j < q; j++) scanf("%d", &B[i][j]);
    for(i = 0; i < m; i++) for(j = 0; j < q; j++) {
        C[i][j] = 0;
        for(k = 0; k < n; k++) C[i][j] += A[i][k] * B[k][j];
    }
    printf("Matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) printf("%d ", A[i][j]);
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) printf("%d ", B[i][j]);
        printf("\n");
    }
    printf("Product Matrix C:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) printf("%d ", C[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
