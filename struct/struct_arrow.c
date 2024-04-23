//
// Created by ProjectWind on 2024/4/24.
// 箭头操作符
#include <stdio.h>

typedef struct Train {
    int a;
} T;


int main() {
    T t = {1};
    /**
     * 箭头操作符可以简化结构体指针对结构体变量的获取
     * 结构体指针才能这么操作。
     */
    T *tp = &t;
    //不用箭头操作符：
    printf("tp.a = %d\n", (*tp).a);
    //使用箭头操作符
    printf("tp.a = %d\n", tp->a);


    return 0;
}


