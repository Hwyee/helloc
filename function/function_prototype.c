//
// Created by ProjectWind on 2024/4/22.
// 函数原型 可以让函数先使用，后声明
#include <stdio.h>

void function1();

void function2();

/**
 * 以下两种方式一样
 */
void add(int, int);

void add_p(int a, int b);

/**
 * 变长数组声明，数组长度要写在前面
 * 两种写法一样 *代表占位符
 * @return
 */
void var_arr(int, int[ *]);

void var_arr1(int, int[]);

void var_arr(int n, int arr[n]) {

}

int main() {
    //不建议将函数原型放到main函数里面，这样其他函数调用不到，可能造成代码的冗余。
    void func();

    function1();
    //如果没声明函数体调用时也会报错。undefined reference to `function2'
    //function2();

}

void function1() {
    printf("function1...\n");
}