//
// Created by ProjectWind on 2024/4/6.
//
#include <mshtmlc.h>
#include <stdbool.h>
#include "stdio.h"
#include "limits.h"
//宏定义
#define SUCCESS 1
#define FAIL 0
#define BOOL int
//必须放在main的前面
enum Name{
    JACK,
    LIKE,
    KUNKA = 1
};

int main() {
    //整型，浮点型，字符型（c语言没有字符串，用字符数组），布尔型_Bool.
    int a,b;
    //整型，c语言的整型默认是signed，带有正负号，可以使用unsigned修饰，表示没有正负号，只能表示0和正整数。
    unsigned int c = -1U;//不会报错 U代表无符号类型整数
    printf("%u\n",c);//4294967295 (2^32 - 1)
    printf("%d\n",c);//-1
    //后缀，l或者L,u/U,不带也可以有自动类型提升。
    long l = 3523525L;
    long long ll = 342423255LL;
    short s = 22;
    printf("INT LIMIT:%d\n", INT_MAX);

    //浮点型
    double d = 2421.4e1;
    //0.3E4 = .3E4
    double d1 = .3E4;
    printf("double1 : %lf,double2:%lf\n", d, d1);
    //字符型
    char ch = 'a';
    printf("char : %c\n",ch);
    //布尔 c99前没有布尔型，c99才出现布尔类型。0表示False，1表示True。
    //c99还提供了 stdbool.h头文件，引入这个头文件可以使用bool定义boolean类型
    _Bool flag = 1;
    a = flag==TRUE?1:0;
    printf("flag:%d\n", a);
    BOOL booL = SUCCESS;
    if(booL){
        printf("booL:%d\n",booL);
    }
    bool isFlag = 1;
    printf("bool:%d\n",isFlag);
    //编译器警告。
    float f = 235.5;
    float f1 = 235.5f;
    short shs =  (ch+s);
    short sh = (short) (ch+s);//强转就没有编译器警告了
    int shi = ch+s;

    //常量:字面量，#define（和include一样，都是预编译的）,const（c99），枚举(从0开始,也可以指定值)
    3;
    FAIL;//不可以重新赋值。
    int const con = 235;
//    con = 2; 不能改
    printf("JACK:%d\n",JACK);
    printf("LIKE:%d\n",LIKE);
    printf("KUNKA:%d\n",KUNKA);
    enum Name ALL;
    int SS;
    printf("ALL:%d\n",ALL);//未初始化的变量，相当于打印了一个随机值
    printf("SS:%d\n",SS);

    return 0;
}


