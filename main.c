//��ѧϰc���ԣ������ŵ�������


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
    char *p = "���ӽ�ɵ��";
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
    printf("**%10.2f**\n", 551.556);//   .�����Ǳ�����λС�������������룩
    //5����С����ǰ��5λ��������5���ճ���������5��������


    printf("hello world\n");
    char *yzk = "���ӿ�";
    printf("yzk=%s\n", yzk);


//�Զ�����ת���Ĺ���



//1)���ʽ��ֻ������char,short int,int�����е�һ�ֻ����û����������
//�μ�����ĳ�Աȫ�����int���͵Ĳμ����㣬���Ҳ��int���͵�
//�������£�
    printf("%d\n", 5 / 2);//����ȫ��int���ͣ����Ե��½��Ҳ��Ϊint���͡�����5����2��������Ľ��Ϊ2


//2)���ʽ�г����˴�С�����ʵ�����μ�����ĳ�Աȫ�����double���͵Ĳμ����㣬���Ҳ��double���͵Ľ��
    printf("%lf\n", 5.0 / 2);

    char *message = "hello world";
    printf("%s\n", message);//�ַ���


//3)���ʽ�����з�������Ҳ���޷��������μ�����ĳ�Ա����޷������μ�������Ҳ���޷�������ǰ���ǣ����ʽ����ʵ����

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


//4���ڸ�ֵ����еȺ��ұߵ������Զ�ת��Ϊ�Ⱥ���ߵ����ͣ��ұ���
    int q;
    float z = 9.9f;
    q = z;
    printf("q=%d\n", q);
//5���Զ�����ת����������������н�����ʱ�Ե�ת����������Ӱ��ԭ���Զ�ת���ı�������Ա�������ͺ�ֵ
    printf("z=%f\n",z);
    return 0;
}