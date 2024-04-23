//
// Created by ProjectWind on 2024/4/24.
// 共用体
#include <stdio.h>

/**
 * 可以灵活变更的数据结构
 * 内存占用大小是最大的数据结构长度。
 * @return
 */

union U1{
    int a;
    char b;
    double d;
}u11;
int main(){
    //声明共用体.
    union U1 u1;
    printf("U1 sizeof:%llu\n", sizeof(u1));//8

    /**
     * 共用体只能有一个值，如果有多个值，前面的值就会被覆盖。
     * 下面的例子可以思考下，d能覆盖a。a不能覆盖d。
     */
    u1.a = 1;
    u1.d = 8;
    printf("U1 a:%d\n", u1.a);//0
    printf("U1 d:%lf\n", u1.d);//8
    u1.a = 10;
    printf("U1 a:%d\n", u1.a);//10
    printf("U1 d:%lf\n", u1.d);//8

    /**
     * 共用体也不能这么赋值，只能赋一个值.
     * 下面这个默认只给a赋值了，后面的不能覆盖前面的。
     * 编译器警告了 注释代码
     */
//    union U1 u2 = {1,2,3};//
//    printf("U2 d:%lf\n", u2.d);//0
//    printf("U2 a:%d\n", u2.a);//1

    union U1 u3 = {1};
    union U1 u4 = {.d=3};

    union U1 * up = &u4;
    printf("UP d:%lf\n", up->d);//3
    printf("UP d:%lf\n", (*up).d);//3

    printf("UP d:%lf\n", u4);//3 不建议这样搞。

    return 0;
}
