//《学习c语言，从入门到入土》


#include <stdio.h>
#include "test1.h"

int main()
{
    char a = 'w';
    int b = 666;
    float c = 1.144f;
    double d = 1.56;
    int e = 0x5e;
    float f = 0.5464f;
    double g = 1350437095;
    char *p = "易子建傻逼";
    printf("a =%c\n", a);
    printf("b =%d\n", b);
    printf("c=%f\n", c);
    printf("d=%lf\n", d);
    printf("e+%x\n", e);
    printf("e=%d\n", e);
    printf("f=%e\n", f);
    printf("g=%e\n", g);
    printf("%s\n", p);


    printf("**%4d**\n", 558);
    printf("**%03d**\n", 1);
    printf("**%-3d**\n", 1);
    printf("**%10.2f**\n", 551.556);//   .几就是保留几位小数（带四舍五入）
    //5就是小数点前的5位数，少于5则会空出来，多余5则不起作用


    printf("hello world\n");
    char *yzk = "易子康";
    printf("yzk=%s\n", yzk);


//自动类型转化的规则：



//1)表达式中只出现了char,short int,int类型中的一种或多种没有其他类型
//参加运算的成员全部变成int类型的参加运算，结果也是int类型的
//例子如下：
    printf("%d\n", 5 / 2);//由于全是int类型，所以导致结果也成为int类型。所以5除以2运算出来的结果为2


//2)表达式中出现了带小数点的实数，参加运算的成员全部变成double类型的参加运算，结果也是double类型的结果
    printf("%lf\n", 5.0 / 2);

    char *message = "hello world";
    printf("%s\n", message);//字符串


//3)表达式中有有符号数，也有无符号数，参加运算的成员变成无符号数参加运算结果也是无符号数（前提是：表达式中无实数）

    int m = -3;
    unsigned int n = 6;
    if (m + n > 0)
    {
        printf("yzjsb\n");
    } else if (m + n < 0)
    {
        printf("yzj2b\n");
    } else
    {
        printf("yzj\n");
    }
//    printf("m+n=%d\n",m+n );
//    printf("m+n=%x\n",m+n);


//4）在赋值语句中等号右边的类型自动转换为等号左边的类型（右变左）
    int q;
    float z = 9.9f;
    q = z;
    printf("q=%d\n", q);
//5）自动类型转换都是在运算过程中进行临时性的转换，并不会影响原来自动转换的变量（成员）的类型和值
    printf("z=%f\n",z);
    return 0;
}