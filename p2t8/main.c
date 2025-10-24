//比大小
//有3个整数a,b,c，由键盘输入，输出其中最大的数(使用if-else语句)
#include <stdio.h>
int main() {
    int a, b, c, max;
    scanf("%d%d%d", &a, &b, &c);
    if (a>b) {
        max = a;
    } else {
        max = b;
    }
    if (max < c) {
        max = c;
    }
    printf("%d", max);
    return 0;
}