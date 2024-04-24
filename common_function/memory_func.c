//
// Created by ProjectWind on 2024/4/24.
// 内存管理函数
#include <stdio.h>
#include <Stdlib.h>

struct A{
    int a;
    struct A *n;
};

typedef struct B{
    int b;
    struct B *n;
}B;
int main() {
    /**
     * 栈空间：局部变量
     * 堆空间：malloc()等动态函数
     * 全局区：全局变量，静态局部变量，常量（字符串，const）
     * 代码区：编写的代码
     */

    /**
     * void指针 无类型指针
     * 可以指向任意类型数据，但是无法读取数据
     *
     */
    int a = 10;
    void *vp = &a;
    int *ap = vp;

    /**
     * malloc()
     * 分配长度为size的连续空间。返回首地址。返回NULL说明分配失败。
     */
    int *ip = (int *) malloc(sizeof(int));

    free(ip);
    //给数组分配空间
    int *arrp = (int *) malloc(3 * sizeof(int));

    free(arrp);

    struct A * sap = (struct A *) malloc(sizeof (struct A));
    if(sap != NULL){
        free(sap);
    }
    /**
     * free()函数
     * 释放空间，防止内存泄漏。
     *
     */

    /**
     * calloc(n,size)
     * 开辟连续n个size 的空间，开辟数组方便。但是malloc()也可以实现。
     * 但是calloc开辟空间后会对数组进行初始化
     * calloc = malloc + memset
     */

    /**
     * realloc(p,size)
     * 重新分配空间,对指针进行重新分配一个空间，有可能是新地址，也有可能是原地址缩减。
     */

    return 0;
}
