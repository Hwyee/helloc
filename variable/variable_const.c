//
// Created by ProjectWind on 2024/4/23.
// 常量
#include <stdio.h>

/**
 * 常量参数
 * @param a
 */
void const_param(const int a) {
    //a  = 10;不能改变
}

/**
 * 常量数组
 */
void const_arr() {
    const int arr[] = {1, 2, 3};
    //arr[0] = 1;不能改变
}

/**
 * 常量结构体
 * @return
 */
struct const_struct{
    const int a;
    const int b;
};


int main() {
    /**
     * 常量
     */
    const int a = 10;
    //a++; 不能更改
    int b = 10;
    /**
     * 指向常量的指针
     */
    const int *p = &b;
    //*p  = 20;不能改变
    p = &a;//可以执行

    int const *pp =&b;
    //*p = 20;不能改变
    p = &a;

    /**
     * 指针常量
     */
    int *const cp = &b;
    *cp = 20;//可以改变
    //cp = &a;//不能改变

    /**
     * 指向常量的常量指针
     */
    const int *const ccp = &b;
    //*ccp=20;不能改变
    //ccp=&a;不能改变


    return 0;
}
