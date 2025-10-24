//将China译成密码
//密码规律是：用原来的字母后面第4个字母代替原来的字母。
//例如，字母A后面的第4个字母是E，用E代替A。因此China应该译为Glmre。
//请编写一个程序，用赋初值的方法使c1,c2,c3,c4,c5这5个变量的值分别为'C','h','i','n','a'，经过运算加密为Glmre。
#include <stdio.h>
int main() {
    char a = 'C', b = 'h', c = 'i', d = 'n', e = 'a';
    a = a + 4;
    b = b + 4;
    c = c + 4;
    d = d + 4;
    e = e + 4;
    printf(" %c %c %c %c %c", a, b, c, d, e);
    return 0;
}