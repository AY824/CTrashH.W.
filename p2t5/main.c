//Harris-Benedict等式
//Harris-Benedict等式可以计算在你不做任何运动锻炼的时候，身体维持现在的体重所需要的卡路里。这也称为你的基础代谢率(BMR)。
//对于女性来讲，BMR的计算公式为：
//BMR = 655 + (4.3 * weight in kilograms × 2.2) + (4.7 * height in centimeters × 0.39) - (4.7 × age in years)
//对于男性来讲，BMR的计算公式为：
//BMR = 66 + (6.3 × weight in kilograms × 2.2) + (12.9 × height in centimeters × 0.39) - (6.8 × age in years)
//一块巧克力大致含有230卡路里
//请写一个程序，要求允许用户输入自己的身高，体重，年龄，以及性别(用M表示男性，用F表示女性)，计算用户维持相应的体重所需要消耗的巧克力数。
#include <stdio.h>
int main() {
    int height;
    int weight;
    int age;
    char sex;
    float n;
    scanf("%d%d%d %c", &height, &weight, &age, &sex);

    if (sex == 'F') {
        n = (655 + (4.3 * weight * 2.2) + (4.7 * height * 0.39) - (4.7 * age)) / 230;
    }
    else if (sex == 'M') {
        n = (66 + (6.3 * weight * 2.2) + (12.9 * height * 0.39) - (6.8 * age)) / 230;
    }

    printf("%.2f", n);
    return 0;
}