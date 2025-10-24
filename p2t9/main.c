//求平方根
//从键盘输入一个小于1000的正数，要求输出它的平方根(如果平方根不是整数则输出其整数部分)。
#include <stdio.h>
#include <math.h>
int main() {
    int z;
    scanf("%d", &z);
    int r = sqrt(z);
    printf("%d", r);
    return 0;
}