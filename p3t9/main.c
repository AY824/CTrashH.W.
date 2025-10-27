//输出ISBN中所包含的出版地区的信息
//每本书的封底都有一串号码，比如978-7-111-34081-2，它叫做"国际标准书号"（International Standard Book Number，缩写为ISBN）。它是全世界图书的编码，用来唯一代表一本书。目前ISBN是13位。从组成上看，13位的ISBN可以分为5个区：
//第一区 EAN-UCC前缀 、第二区 组区号、第三区 出版者号、第四区 出版序号、第五区 校验码。
//其中第二区 组区号从第4位数字开始。这部分表明这本书是哪个国家或地区出版的。0或1表示英语国家，2表示法语国家，3表示德语国家，4表示日本，5表示俄语国家，6表示伊朗，7表示中国大陆，89表示韩国，957和986表示台湾，962和988表示香港，99936表示不丹。
//输入一个13位ISBN。输入格式：978-7-111-34081-2
//输入之后，输出ISBN中所包含的出版地区的信息。
#include <stdio.h>
int main() {
    int x,y;
    scanf("%d-%d", &x, &y);
    if (y == 0 || y == 1) {
        printf("English Region");
    }else if (y == 2) {
        printf("French Region");
    }else if (y == 4) {
        printf("Japan");
    }else if (y == 7) {
        printf("China");
    }else if (y == 89) {
        printf ("South Korea");
    }else if (y == 957 || y == 986) {
        printf ("Taiwan");
    }else if (y == 962 || y == 988) {
        printf ("Hong Kong");
    }
    return 0;
}