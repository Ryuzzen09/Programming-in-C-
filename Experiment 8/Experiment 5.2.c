#include <stdio.h>
#include <conio.h>
int g = 50;
void func() {
    int l = 20;
    printf("Inside func, local l = %d\n", l);
    printf("Inside func, global g = %d\n", g);
}
int main() {
    printf("Name- Akshat Singh Rawat\nSAP_ID-590028778\nCourse-BCA\nBatch-6");
    printf("\n--------------------------------------\n");
    func();
    printf("In main, global g = %d\n", g);
    getch();
    return 0;
}
