#include <stdio.h>
#include <conio.h>
int main() {
 printf("Name - Akshat Singh Rawat\nSAP ID - 590028778\nCourse - BCA\nBatch - B6");
    printf("\n--------------------------------------------\n");
 int num = 1;
 int rows = 4;
 int i, j;
 for(i = 1; i <= rows; i++) {
  for(j = 1; j <= i; j++) {
   if (i==4 && (j == 2 || j == 3)) {
    printf("9");
   } else {
    printf("%d ", num);
    num++;
   }
  }
  printf("\n");
 }
 getch ();
 return 0;
}
