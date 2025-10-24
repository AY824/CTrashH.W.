//转化大写字母为小写字母
//输入一个大写字母，要求用小写字母输出
#include <stdio.h>
int main() {
    char m;
    scanf(" %c", &m);
    char n = m + 32;
    printf("%c", n);
    return 0;
}