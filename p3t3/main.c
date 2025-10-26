//求方程实根
//编写程序，从键盘输入一个二元一次方程ax2+bx+c=0的三个参数a、b、c（均为整数），求此方程的实根。
//如果方程有实根，则输出实根（精确到小数点后2位，较大实根在前），如果没有实根，则输出没有实根的信息。
#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    float delta, x1, x2;
    delta = pow(b, 2) - 4 * a * c;
    if(delta < 0) {
        printf("ERRO!");
    }else if(delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("%.2f,%.2f", x1, x2);
    }else if(delta == 0) {
        x1 = - b / (2 * a);
        x2 = x1;
        printf("%.2f, %.2f", x1, x2);
    }
    return 0;
}