//输入任意点坐标，求该点的建筑高度
//有4个圆塔，圆心分别为(2,2)、(-2,2)、(-2,-2)、(2,-2)，圆半径为1，
//这四个塔的高度为10米，塔以外无建筑物。输入任意点坐标，求该点的建筑高度（塔外高度为0）
#include <stdio.h>
#include <math.h>
int main() {
    double x, y;
    scanf("%lf%lf", &x, &y);
    if(pow(x - 2, 2) + pow(y - 2, 2) <= 1
    || pow(x + 2, 2) + pow(y - 2, 2) <= 1
    || pow(x + 2, 2) + pow(y + 2, 2) <= 1
    || pow(x - 2, 2) + pow(y + 2, 2) <= 1) {
        printf("10");
    }else{
        printf("0");
    }
    return 0;
}

