//判断日期是这一年的第几天
//输入某年某月某日，判断这一天是这一年的第几天？
#include <stdio.h>
int main() {
    int year, month, day, the_day;
    int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12;
    m1 = m3 = m5 = m7 = m8 = m10 = m12 = 31;
    m4 = m6 = m9 = m11 = 30;
    scanf("%d%d%d", &year, &month, &day);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        if (month == 1) {
            the_day = day;
            printf("%d\n", the_day);
        }else if (month == 2) {
            the_day = day + m1;
            printf("%d\n", the_day);
        }else if (month == 3) {
            the_day = day + m1 + 29;
            printf("%d\n", the_day);
        }else if (month == 4) {
            the_day = day + m1 + 29 + m3;
            printf("%d\n", the_day);
        }else if (month == 5) {
            the_day = day + m1 + 29 + m3 + m4;
            printf("%d\n", the_day);
        }else if (month == 6) {
            the_day = day + m1 + 29 + m3 + m4 + m5;
            printf("%d\n", the_day);
        }else if (month == 7) {
            the_day = day + m1 + 29 + m3 + m4 + m5 + m6;
            printf("%d\n", the_day);
        }else if (month == 8) {
            the_day = day + m1 + 29 + m3 + m4 + m5 + m6 + m7;
            printf("%d\n", the_day);
        }else if (month == 9) {
            the_day = day + m1 + 29 + m3 + m4 + m5 + m6 + m7 + m8;
            printf("%d\n", the_day);
        }else if (month == 10) {
            the_day = day + m1 + 29 + m3 + m4 + m5 + m6 + m7 + m8 + m9;
            printf("%d\n", the_day);
        }else if (month == 11) {
            the_day = day + m1 + 29 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10;
            printf("%d\n", the_day);
        }else if (month == 12) {
            the_day = day + m1 + 29 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11;
            printf("%d\n", the_day);
        }
    }else {
        if (month == 1) {
            the_day = day;
            printf("%d\n", the_day);
        }else if (month == 2) {
            the_day = day + m1;
            printf("%d\n", the_day);
        }else if (month == 3) {
            the_day = day + m1 + 28;
            printf("%d\n", the_day);
        }else if (month == 4) {
            the_day = day + m1 + 28 + m3;
            printf("%d\n", the_day);
        }else if (month == 5) {
            the_day = day + m1 + 28 + m3 + m4;
            printf("%d\n", the_day);
        }else if (month == 6) {
            the_day = day + m1 + 28 + m3 + m4 + m5;
            printf("%d\n", the_day);
        }else if (month == 7) {
            the_day = day + m1 + 28 + m3 + m4 + m5 + m6;
            printf("%d\n", the_day);
        }else if (month == 8) {
            the_day = day + m1 + 28 + m3 + m4 + m5 + m6 + m7;
            printf("%d\n", the_day);
        }else if (month == 9) {
            the_day = day + m1 + 28 + m3 + m4 + m5 + m6 + m7 + m8;
            printf("%d\n", the_day);
        }else if (month == 10) {
            the_day = day + m1 + 28 + m3 + m4 + m5 + m6 + m7 + m8 + m9;
            printf("%d\n", the_day);
        }else if (month == 11) {
            the_day = day + m1 + 28 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10;
            printf("%d\n", the_day);
        }else if (month == 12) {
            the_day = day + m1 + 28 + m3 + m4 + m5 + m6 + m7 + m8 + m9 + m10 + m11;
            printf("%d\n", the_day);
        }
      }
    return 0;
  }