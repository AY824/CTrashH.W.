//计算成绩分数所在等级
//给出一百分制成绩，要求输出成绩等级’A’、’B’、’C’、’D’、’E’。
//90分以上为‘A’,80~89为‘B’,70~79为‘C’,60~69为‘D’, 60分以下为‘E’。

#include <stdio.h>
int main() {
    int score;
    char A, B, C, D, E;
    scanf("%d", &score);
    if(score < 60) {
        printf("%c", 'E');
    }
    else if(score >= 60 && score <= 69) {
        printf("%c", 'D');
    }
    else if(score >= 70 && score <= 79) {
        printf("%c", 'C');
    }
    else if(score >= 80 && score <= 89) {
        printf("%c", 'B');
    }
    else if(score >= 90) {
        printf("%c", 'A');
    }
    return 0;
}