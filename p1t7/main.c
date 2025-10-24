//输入与输出函数
//用scan函数输入数据，为a,b,x,y,c1,c2赋值，并将其依次输出。
#include <stdio.h>
int main() {
    int a, b;
    float x, y;
    char c1, c2;
    scanf("%d%d%f%f %c %c", &a, &b, &x, &y, &c1, &c2);
    printf("a = %d, b = %d, x = %.2f, y = %.2f, c1 = %c, c2 = %c", a, b, x, y, c1, c2);
    return 0;
}