//根据分数输出对应评价
//从键盘输入一个学生的分数, 要求实现这样的判断功能:
//如果分数大于100或者小于0，输出”Input error!”
//如果分数介于100到90之间（包含100但不包含90）, 输出”Very Good!”
//如果分数介于80到90之间,输出”Good!”
//如果分数介于70到80之间,输出”Middle!”
//如果分数介于60到70之间, 输出”Pass!”
//如果分数小于等于60,输出”No Pass!”。
//要求必须使用if-else 结构实现。
#include <stdio.h>
int main() {
    int score;
    scanf("%d", &score);
    if (score < 0 || score > 100) {
        printf("Input error!");
    }else if (score > 90) {
        printf("Very Good!");
    }else if (score > 80 && score <= 90) {
        printf("Good!");
    }else if (score > 70 && score <= 80) {
        printf("Middle!");
    }else if (score > 60 && score <= 70) {
        printf("Pass!");
    }else if (score <= 60) {
        printf("No Pass!");
    }
    return 0;
}