//《学习c语言，从入门到入土》


#include <stdio.h>
#include "test1.h"

int main()
{
    char a = 'w';
    int b = 666;
    float c = 1.144f;
    double d = 1.56;
    d++;
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
        printf("yzj\n");
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
    printf("z=%f\n", z);





//强制类型转换（想要的类型说明符）（表达式，常量可以不加括号）
//功能：把表达式的运算结果强制转换成类型说明符所表示的的类型
//PS:
//(float)a  把a的值转换为实型
//（int）（x+y）  把x+y的结果值转换为整型
//注意：想要的类型说明符必须加括号


    float x = 0;
    int i = 0;
    x = 3.6f;
    i = (int) x;
    printf("i=%d\n", i);
    printf("x=%f\n", x);
//说明：无论是强制转换或是自动转换，都只是为了本次运算的需要，而对变量数据长度进行的临时性转换，而不改变数据定义的类型以及它的值



//运算符！！！！！！：



//1.算数运算符:+ - * / %(余)
//复合运算符：+= -= *= /= %=(算术运算符包括复合运算符)
    int ab = 10;
    int ac = 20;
    int ad = ab + ac;
    int ai;
    printf("ad=%d\n", ad);
    ad = 10 % 3;
    printf("ad=%d\n", ad);


    ab += 3;//ab +=3相当于ab=ab+3
    printf("ab=%d\n", ab);
    ac += 2 * 6;//相当于ac=ac+(2*6)
    printf("ac=%d\n", ac);


//2.关系运算符：
//>  <  ==  >=  <=  !=
// !=为不等于
//一般用于判断条件是否满足或者循环语句


    if (ab < ac)
        printf("ab < ac\n");
    if (ab > ac)
        printf("ab > ac\n");
    for (ai = 0; ai <= 100; ai++)
        printf("ai=%d\n", ai);


//3.逻辑运算符：
//1)&&逻辑与
//两个条件都为真，则结果为真
//if((a>b) && (a<c))  |if(b<a<c)这种表达方式是错误的!!!!

//2）||逻辑或
//两个条件至少有一个为真，则结果为真
//if((a>b)||(a<c))

//3)!逻辑非
//if(a>b))
//{
// }

    if ((ab < ac) && (ac > ad))//逻辑与
    {
        printf("条件为真\n");
    }
    if ((ab < ac) || (ac < ad))//逻辑或
    {
        printf("条件为真2\n");
    }
    if (ab < ac)//逻辑非
    {
        printf("逻辑非");
    }
//十进制转二进制：    同理：十进制转八进制就是除8求余，转十六进制是除十六求余
//方法：除2求余法
//例子：123 十进制转二进制
//123/2=61余1（低位）    61/2=30余1   30/2=15余0   15/2=7余1   7/2=3余1   3/2=1余1   1/2=0余1（高位）
//所以123的二进制为  0（补零）111 1011（注意第一次求出来的数为低位）


    return 0;

}

