//
// Created by ProjectWind on 2024/4/23.
// struct 概念 声明 使用
#include <stdio.h>
#include <string.h>
#include <malloc.h>

/**
 * 声明结构体
 */
struct Life {
    int born;
    int dead;
    char where[30];
};

/**
 * 写法4. 声明结构体时定义变量
 * @return
 */

struct Undefined {
    int a;
} u1, u2;

/**
 * 写法5. 不指定类型名，直接定义结构体变量
 * 匿名结构体
 */
struct {
    int f;
} f1, f2;

/**
 * 写法6.声明结构体时定义变量，并赋值。
 */
struct Fine {
    int i;
} i1 = {1}, i2 = {2};

/**
 * 写法7.使用typedef命令
 */
typedef struct ThatIsInteresting{
    int t;
}TII,tii,sho,*pt;

int main() {
    /**
     * 声明结构体变量
     * 写法1.
     * 变量没赋值，是没有默认值的。
     */
    struct Life myLife;

    /**
     * 调用结构体变量成员
     */
    myLife.born = 1;
    myLife.dead = 1;
    //数组声明后不可变
    //myLife.where = "there";
    //使用这个函数可以逐个改变数组中的元素
    strcpy(myLife.where, "there");

    //printf("mylife :%p\n", myLife);不能这么打印，没有意义，应该是给了个随机的地址。
    printf("mylife :%p\n", &myLife);

    /**
     * 写法2.
     */
    struct Life uLife = {1, 0, "where"};

    /**
     * 写法3.
     * 没赋值的变量有默认值
     */
    struct Life whoLife = {.where="who"};

    /**
      * 写法4. 声明结构体时定义变量
      */
    //u1 = {1};不能这样
    u1.a = 100;

    /**
     * 写法5. 不指定类型名，直接定义结构体变量
     * 无法自己创建结构体，只能使用预定义的结构体变量。
     */
    f1.f = 000;

    /**
     * 写法6.声明结构体时定义变量，并赋值。
     */
    i1.i = 3;

    /**
     * 写法7.使用typedef命令
     */
    TII a;
    sho s;
    a.t = 10;
    s.t = 20;
    /**
     * 以下两种写法一样
     * 不推荐更改指针的定义方式。
     */
    pt p1 = &a;
    TII *p2 = &a;

    /**
     * malloc声明struct
     * 这种方式是在堆空间中开辟的内存，需要自己释放。
     * 因为这种方式创建的是指针，所以可以随时更改变量的值。
     */
    TII *tcp = (TII *) malloc(sizeof (TII));

    free(tcp);

    return 0;
}
