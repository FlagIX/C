//��ѧϰc���ԣ������ŵ�������


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
    char* p = "���ӽ�ɵ��";
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
    printf("**%10.2f**\n",551.556);//   .�����Ǳ�����λС�������������룩
    //5����С����ǰ��5λ��������5���ճ���������5��������


    printf("hello world\n");
    char* yzk = "���ӿ�";
    printf("yzk=%s\n",yzk);
    return 0;
}