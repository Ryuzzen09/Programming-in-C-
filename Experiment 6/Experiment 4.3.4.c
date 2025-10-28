#include <stdio.h>
#include <conio.h>
int main() {
 int rows = 5;
 int i, j;
 printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n------------------------------------\n");
 for(i = 1; i <= rows; i++) {
  for(j = i; j >= 1; j--) {
   printf("%d", j);
  }
  printf("\n");
 }
 getch ();
 return 0;
}
