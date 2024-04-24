//
// Created by ProjectWind on 2024/4/24.
// typedef使用
#include <stdio.h>

/**
 * typedef可以给数据类型起别名
 * 1.基本数据类型起别名
 */
typedef int I;
typedef unsigned int UI;

/**
 * 2.结构体、共用体起别名
 */
typedef struct A {
    int a;
} A;

typedef struct {
    int b;
} B;

typedef struct A AA;

typedef union {
    int a;
    int b;
    char c;
} C;

/**
 * 3.给指针类型起别名
 */
typedef int *INT_P;
typedef char *String;

/**
 * 4.给数组类型起别名
 */
typedef int INT_ARR_FIVE[5];//表示长度为5的数组
typedef char *STR_ARR[2];

/**
 * 5.给函数起别名
 * @param a
 * @param b
 * @return
 */
//给函数指针起别名
typedef int (*P_ADD)(int, int);


int add(int a,int b){
    return a+b;
}
/**
 * typedef和#define不同。
 * #define是在预编译时处理，只能做简单的字符串替换，typedef是在编译阶段处理的，非简单的字符串替换。
 * @return
 */

int main() {
    //基本数据类型别名
    I i = 10;
    UI ui = -10;
    printf("ui = %u\n", ui);//4294967286
    //结构体别名
    A sa = {1};

    //指针别名
    INT_P p = &i;
    String s = "string";

    //数组别名
    INT_ARR_FIVE arr = {1, 2, 3, 4, 5};
    STR_ARR strArr = {"abc","def"};

    //函数别名
    P_ADD pAdd = &add;
    int addRes = (*pAdd)(1,2);
    printf("addRes = %d\n", addRes);//3

    return 0;
}


