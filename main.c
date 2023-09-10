//《学习c语言，从入门到入土》


#include <stdio.h>
#include "test1.h"
int main()
{
    char a ='w';
    int b = 666;
    float c = 1.144f;
    double d = 1.56;
    int e = 0x5e;
    float f = 0.5464f;
    double g = 1350437095;
    char* p = "易子建傻逼";
    printf("a =%c\n",a);
    printf("b =%d\n",b);
    printf("c=%f\n",c);
    printf("d=%lf\n",d);
    printf("e+%x\n",e);
    printf("e=%d\n",e);
    printf("f=%e\n",f);
    printf("g=%e\n",g);
    printf("%s\n",p);



    printf("**%4d**\n",558);
    printf("**%03d**\n",1);
    printf("**%-3d**\n",1);
    printf("**%10.2f**\n",551.556);//   .几就是保留几位小数（带四舍五入）
    //5就是小数点前的5位数，少于5则会空出来，多余5则不起作用


    printf("hello world\n");
    char* yzk = "易子康";
    printf("yzk=%s\n",yzk);
    return 0;
}