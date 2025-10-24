//分钟转换日期计算器
//编写程序，提示用户输入分钟数（例如10000000），然后显示这些分钟代表多少年和多少天。为了简化问题，
//假设一年有365天，不足1天按1天算。
#include <stdio.h>
int main() {
    long long minutes;
    int total_days, years, days;
    scanf("%lld", &minutes);
    total_days = (minutes + ((60 * 24) - 1)) / (60 * 24);
    years = total_days / 365;
    days = total_days % 365;
    printf("%dyear(s)%dday(s)\n", years, days);
    return 0;
}