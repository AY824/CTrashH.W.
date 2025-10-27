//将大写字母转换为小写字母
//输入一个字符，判别它是否为大写字母，如果是，转换成小写字母，如果不是，不转换。

#include <stdio.h>
int main() {
    char c;
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z') {
        c = c + 32;
        printf("%c", c);
    } else {
        printf("%c", c);
    }
    return 0;
}