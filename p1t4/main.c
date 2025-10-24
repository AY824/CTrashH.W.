//三角形的面积
//三角形的面积为area = sqrt(s * (s - a) * (s - b) * (s - c));
//s = frac (1 / 2) * (a + b + c),  a 、 b 、 c 为三角形的三边。
//定义两个带参数的宏，一个用来求 s，另一个用来求 area。编写程序在主函数中用带实参的宏名来求三角形的面积。
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    float s = (a + b + c) / 2;
    float area;
    area = sqrt( s * (s - a) * (s - b) * (s - c));
    printf("%.2f", area);
    return 0;
}