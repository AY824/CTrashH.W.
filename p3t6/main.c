//闰年判断器
//写一个程序判断某一年是否为闰年
#include <stdio.h>
int main() {

    int year;
    scanf("%d", &year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}