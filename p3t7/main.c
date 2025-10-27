//计算运输公司的运输费用
//计算运输公司的运输费用。路程(s)越远，每吨*千米运费越低，标准如下
//S<250 没有折扣
//250≤S<500 2%折扣
//500≤S<1000 5%折扣
//1000≤S<2000 8%折扣
//2000≤S<3000 10%折扣
//3000≤S 15%折扣

#include <stdio.h>
int main() {
    int fees, weight, s;
    scanf("%d %d %d", &fees, &weight, &s);
    if (s < 250) {
        float total_fees = fees * weight * s;
        printf("%.2f", total_fees);
    }else if (s >= 250 && s < 500) {
        float total_fees = (0.98 * fees) * weight * s;
        printf("%.2f", total_fees);
    }else if (s >= 500 && s < 1000) {
        float total_fees = (0.95 * fees) * weight * s;
        printf("%.2f", total_fees);
    }else if (s >= 1000 && s < 2000) {
        float total_fees = (0.92 * fees) * weight * s;
        printf("%.2f", total_fees);
    }else if (s >= 2000 && s < 3000) {
        float total_fees = (0.9 * fees) * weight * s;
        printf("%.2f", total_fees);
    }else if (s >= 3000) {
        float total_fees = (0.85 * fees) * weight * s;
        printf("%.2f", total_fees);
    }
    return 0;
}