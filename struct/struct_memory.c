//
// Created by ProjectWind on 2024/4/23.
// 结构体内存占用
#include <stdio.h>
struct Test1{
    int a;//4个字节
    char b;//1个字节
    char c;//1个字节
};

struct Test2{
    char b;//1个字节
    int a;//4个字节
    char c;//1个字节
};

int main(){
    struct Test1 t1;

    /**
     * 因为c语言为了计算效率，内存占用都必须是int类型的整数倍。如果int类型是4字节，那么struct占用的空间就是4的倍数。
     * 不够的会补成4的倍数。
     */
    printf("Test1 struct space use:%llu\n",sizeof (t1));//8

    /**
     * 如果两个类型不是挨着的都会补成4个字节存储。
     */
    struct Test2 t2;
    printf("Test2 struct space use:%llu\n",sizeof (t2));//12

    return 0;
}
