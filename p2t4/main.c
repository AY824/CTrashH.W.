//输出浮点数的符号、整数部分和小数部分
//编写程序，从键盘输入一个不等于0的浮点数，然后分别输出这个浮点数的符号、整数部分和小数部分。
#include <stdio.h>
int main() {
    double x;
    scanf("%lf", &x);
    int y = (int)x;
    if (y > 0){
        double z1 = x - y;
        printf("sign:+\n");
        printf("integral part:%d\n", y);
        printf("decimal fraction part:%lf\n", z1);
    }
    else if (y < 0){
        double z2 = (0 - x) - (0 - y);
        printf("sign:-\n");
        printf("integral part:%d\n", -y);
        printf("decimal fraction part:%lf\n", z2);
    }

    return 0;
}