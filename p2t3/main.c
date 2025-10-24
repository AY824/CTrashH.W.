//根据体重计算可以喝汽水的罐数
//已知实验时，杀死一只老鼠所用的人造甜味剂是5g，老鼠的重量为35g。
//假设老鼠的致死量（lethal dose）成比例对应于人的致死量。
//一罐汽水350g，其中所含的人造甜味剂占0.1%。
//输入你的朋友的体重(Kg)，输出他最多可以喝的汽水的罐数。

#include <stdio.h>
int main() {

    double mouse_weight = 35;
    double sweetener = 5;
    double lethal_dose = sweetener / mouse_weight;
    int weight;
    int a_can_of_soda = 350;
    double sweetener_of_a_can_soda;
    sweetener_of_a_can_soda = 0.000001 * a_can_of_soda;
    double max_numbers_of_can;
    scanf("%d", &weight);
    max_numbers_of_can = (weight * lethal_dose) / sweetener_of_a_can_soda;
    int int_part_of_max_numbers_of_can = (int)max_numbers_of_can;
    printf("%dcan(s)", int_part_of_max_numbers_of_can);

    return 0;
}