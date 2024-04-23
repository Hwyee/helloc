//
// Created by ProjectWind on 2024/4/23.
// 内部函数与外部函数
#include <stdio.h>
/**
 * 内部函数
 * 用static 修饰的函数就是内部函数，不能被其他文件调用
 * @return
 */
static void add();

/**
 * 外部函数
 * 默认就是外部函数，也可以加extern修饰函数
 * @return
 */
extern void sum();

int main() {
    add();
    sum();
    return 0;
}

void add(){
    printf("static extern add func.\n");
}