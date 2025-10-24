//方程求解
//输入x的值，求方程 y = x * x + 2 * x - 10 所对应的y值。
#include <stdio.h>
int main() {
    int x, y;
    scanf("%d", &x);
    y = x * x + 2 * x - 10;
    printf("%d", y);
    return 0;
}