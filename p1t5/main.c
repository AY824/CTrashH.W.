//计算国民生产总值增长百分比
//假设我国国民生产总值的年增长率为7%，计算10年后我国国民生产总值与现在相比增长多少百分比。计算公式为 p = (1 + r)^n
//r 为年增长率, n 为年数, p 为与现在相比的倍数
#include <stdio.h>
#include <math.h>
int main() {
    float r = 0.07;
    float n = 10;
    float p = pow(1 + r, n);
    printf("%f", p);
    return 0;
}