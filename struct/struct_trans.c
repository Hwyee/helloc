//
// Created by ProjectWind on 2024/4/23.
// 结构体是值传递
#include <stdio.h>

typedef struct Trans{
    int a;
    int b;
}Trans;

typedef struct TransP{
    char *a;
    int b;
}TransP;

typedef struct TransP1{
    char a[16];
    int b;
}TransP1;

int main(){
    Trans t1 = {1, 2};
    Trans t2 = t1;

    /**
     * 两个变量地址不一样，相当于拷贝了一份给t2.
     */
    printf("t1 address:%p\n", &t1);
    printf("t2 address:%p\n", &t2);

    printf("t1.b address:%p\n", &t1.b);
    printf("t2.b address:%p\n", &t2.b);

    char *str1 = "hello";
    char *str2 = "hello";

    printf("str1 address:%p\n", str1);
    printf("str2 address:%p\n", str2);

    TransP tp1 = {"hello",1};
    TransP tp2 = tp1;
    printf("tp1 address:%p\n", &tp1);
    printf("tp2 address:%p\n", &tp2);

    /**
     * 字符串常量只会保留一份
     */
    printf("tp1.a address:%p\n", tp1.a);
    printf("tp2.a address:%p\n", tp2.a);

    /**
     * 这里不一样，因为是数组，会重新复制一份，c语言数组相当于是不可变的。
     */
    TransP1  tp11 = {"hello",2};
    printf("tp11.a address:%p\n", tp11.a);

}