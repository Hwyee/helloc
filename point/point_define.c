//
// Created by ProjectWind on 2024/4/21.
// 指针
#include <stdio.h>

int main() {
    /**
     * 数据类型 *指针变量名
     */
    //三种方式都可以
    int *i1;
    //int* i2;
    //int * i3;

    //注意：指针变量只能存放地址，不要将整数或者非地址类型数据赋值给指针。
    int a = 10;
    //i1 = a;//错误的
    i1 = &a;

    /**
     * 一个指针指向的还可能是指针
     */
    int **pp;

    return 0;
}
