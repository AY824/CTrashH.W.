//简单计算器程序
//编写一个简单计算器程序，输入格式为：data1 op data2。
//其中data1和data2是参加运算的两个数，op为运算符，它的取值只能是+、-、*、/
//要求必须使用switch-case语句实现。
//输出结果精确到小数点后2位：如输入1+1， 程序应该返回结果2.00。如果输入的等式有误，则输出Error.

#include <stdio.h>
int main() {
    int data1, data2;
    char op;
    scanf("%d %c %d", &data1, &op, &data2);
    double result;
    switch (op) {
        case '+':
            result = data1 + data2;
            printf("%.2f\n", result);
            break;
        case '-':
            result = data1 - data2;
            printf("%.2f\n", result);
            break;
        case '*':
            result = data1 * data2;
            printf("%.2f\n", result);
            break;
        case '/':
            if (data2 != 0) {
                result = data1 / data2;
                printf("%.2lf\n", result);
            }else{
                printf("Error");
            }
            break;
    }
    return 0;
}