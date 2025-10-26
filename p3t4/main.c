//按序输出数字
//输入三个整数a,b,c，从小到大排列依次存入a,b,c中并输出
#include <stdio.h>
int main() {
int a, b, c, temp;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
printf("%d %d %d", a, b, c);
    return 0;
}