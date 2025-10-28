#include <stdio.h>
#include <conio.h>
int main() {
 int i, j;
 int r = 5;
  printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
 for (i=1; i<=r; i++) {
  for (j=1; j<=i; j++) {
   printf("%d", i);
  }
  printf("\n");
 }
 getch ();
 return 0;
}
