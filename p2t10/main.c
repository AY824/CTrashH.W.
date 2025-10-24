//函数求解
//f(x) = x, x < 1;
//f(x) = 2 * x - 1, 10 > x >= 1;
//f(x) = 3 * x - 11, x >= 10;
//编写一个C程序，输入x的值，输出y相应的表达式与值
#include <stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    int y;
    if (x < 1) {
        y = x;
        printf("y = x = %d", y);
    } else if (x >= 1 && x < 10) {
        y = 2 * x - 1;
        printf("y = 2 * x - 1 = %d", y);
    } else if (x>= 10) {
        y = 3 * x - 11;
        printf("y = 3 * x - 11 = %d", y);
    }
    return 0;
}
