//
// Created by ProjectWind on 2024/4/23.
// 可变参数
#include <stdio.h>
#include <stdarg.h>


/**
 * 在 C 语言中，可变参数函数通常需要至少一个固定参数，用于确定可变参数列表的开始位置。
 * 这是因为可变参数函数的参数列表是不固定长度的，编译器需要一个固定参数来确定可变参数列表的起始位置。
 *
 * @param i
 * @param ...
 * @return
 */
int avg(int i, ...) {
    int res = 0;
    //声明var_list类型的可变参数。其实底层是__builtin_va_list。GCC 编译器提供的一个内置类型
    va_list args;
    //var_start函数用来初始化va_list变量。参数1是可变参数对象，参数2是可变参数形参前面那个变量名。
    va_start(args, i);
    /**
     * va_arg用来逐步获取可变参数，每次调用内部指针就会指向下个可变参数。接受两个参数
     * 1.可变参数对象
     * 2.要接收的可变参数类型
     */
    for (int j = 0; j < i; ++j) {
        int temp = va_arg(args, int);
        res += temp;
    }
    /**
     * va_end用来结束可变参数的处理。
     * 释放资源，避免内存泄漏
     */
    va_end(args);

    return res/i;
}

int main() {
    int a = avg(3, 1, 2);
    printf("avg = %d\n", a);

    return 0;
}