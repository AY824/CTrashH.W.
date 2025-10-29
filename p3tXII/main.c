//计算应纳税额及实际得到的报酬
//个人所得税计算，应纳税款的计算公式如下：
//收入 税率
//收入<＝1000元部分 0％
//2000元>＝收入>1000元的部分 5％
//3000元>＝收入>2000元的部分 10％
//6000元>＝收入>3000元的部分 15％
//收入>6000元的部分 20％
//输入某人的收入，计算出应纳税额及实际得到的报酬。要求必须使用if-else 结构完成。
#include <stdio.h>

int main() {
    double income, tax = 0.0, actual;
    scanf("%lf", &income);

    if (income <= 1000) {
        tax = 0;
    } else if (income <= 2000) {
        tax = (income - 1000) * 0.05;
    } else if (income <= 3000) {
        tax = 1000 * 0.05 + (income - 2000) * 0.1;
    } else if (income <= 6000) {
        tax = 1000 * 0.05 + 1000 * 0.1 + (income - 3000) * 0.15;
    } else {
        tax = 1000 * 0.05 + 1000 * 0.1 + 3000 * 0.15 + (income - 6000) * 0.2;
    }

    actual = income - tax;
    printf("%.1f %.2f\n", tax, actual);

    return 0;
}