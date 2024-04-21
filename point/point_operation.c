//
// Created by ProjectWind on 2024/4/21.
// 指针运算
#include <stdio.h>

int main() {
    /**
     * 取址运算符 &
     */
    int i = 100;
    printf("num i = %d\n", i);
    printf("num i address = %p\n", &i);

    int *p1;
    p1 = &i;
    printf("point p1 = %p\n", p1);

    /**
     * 指针变量类型要和变量类型一样
     * 可能导致如下后果：
     * 类型不匹配导致错误操作：如果指针变量的类型与实际指向的变量的类型不匹配，那么在对指针进行解引用（访问指针所指向的变量）时，可能会导致类型不匹配的错误操作，这可能会导致未定义的行为和程序崩溃。
     * 内存访问错误：如果指针变量的类型与变量地址的类型不匹配，那么指针在进行指针运算或者解引用时，可能会导致访问到错误的内存位置，这可能会引发段错误或者内存访问异常。
     * 类型转换问题：如果强制将不同类型的指针进行类型转换，可能会丢失精度或者导致未定义的行为。
     */
    double d = 23.12;
    printf("num d address = %p\n", &d);
    //int *p2 = &d; // 错误的
    //printf("point p2 = %p\n", p2);

    //野指针
    int *p3;//不要直接使用野指针，没什么意义，也可能导致程序崩溃。


    /**
     * 取值运算符 *
     * 解引用符号
     *
     */
    printf("p1 value = %d\n", *p1);
    *p1 = 50;
    printf("p1 value change = %d\n", *p1);

    //*&d 从右向左运算，先取址再取值。
    printf("d value = %.2lf\n", *&d);

    /**
     * 指针相加减
     * 每次加减单位数据类型的字节数，int 就是 4字节。
     * 连续的数据类型加减才有意义。
     */
    int arr[] = {1, 2, 3, 4, 5,6};
    int *p = &arr[2];
    printf("arr[2] value:%d\n",*p);//3
    printf("arr[2] address:%p\n",p);
    printf("arr[3] address:%p\n",p+1);
    printf("arr[3] value:%d\n",*(p+1));//4

    int *pp = arr;//指向数据中首元素地址
    printf("arr[0] address:%p\n",pp);
    printf("arr[0] value:%d\n",*pp);//1

    //指针自增
    printf("arr[2] value:%d\n",*p++);//等同于arr[2++]
    printf("arr[3] value:%d\n",*p);
    printf("arr[3] value:%d\n",*(p++));
    printf("arr[4] value:%d\n",*p);

    /**
     * 指针可以相减（返回的是类型数），比大小（比的是指针保存的地址值）
     */

    return 0;
}


