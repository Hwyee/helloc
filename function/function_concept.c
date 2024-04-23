//
// Created by ProjectWind on 2024/4/22.
// 函数概念
#include <stdio.h>
/**
 * 函数定义：
 * 返回值类型 函数名(数据类型1 形参1...数据类型n 形参n){
 *      函数体;
 * }
 */

/**
 * 计算两个整数之和
 * @param a
 * @param b
 * @return
 */
int add(int a,int b){
    return a+b;
}

/**
 * 如果函数没有return语句则会随机返回一个值。
 * @param a
 * @param b
 * @return
 */
int add_error(int a,int b){
    printf("called add_error function.\n");
}

/**
 * void函数不能接收返回值，否则使用时报错。
 */
void void_return(){
    printf("called void_return function.\n");
    //return 12; 编译器警告 'return' with a value, in function returning void
}

void void_no_return(){
    printf("called void_no_return function.\n");
}

/**
 * 缺少类型说明符，默认为'int';ISO C99及更高版本不支持隐式int
 * 编译器警告
 * @return
 */
//no_return_type(){
//    printf("called void_no_return function.\n");
//    return 1;
//}

/**
  * c语言通过函数实现模块化，面向过程
  * 每个应用程序有且只有一个main函数。
  */
int main(){
    int a =3;
    int b = 4;
    int add_error_res = add_error(3, 4);//called object 'add_error' is not a function or function pointer
    printf("add_error_res:%d\n", add_error_res);//随机得到一个值。

    //程序报错
    //int void_return_res = void_return();// void value not ignored as it ought to be
    //printf("void_return_res:%d\n", void_return_res);

    //程序报错
    //int void_no_return_res = void_no_return();// void value not ignored as it ought to be
    //printf("void_no_return_res:%d\n", void_no_return_res);


//    int no_return_type_res = no_return_type();
//    printf("no_return_type_res:%d\n", no_return_type_res);//1

    /**
     * 注意事项：
     * 1.函数不能嵌套定义
     * 2.C语言不支持函数重载
     *  同一个程序中，函数不能重名，函数名唯一标识一个函数。
     *
     */
//     int test1(){
//         return 0;
//     }

    /**
     * 函数调用
     * main函数可以调用其他函数
     * 其他函数不能调用main函数。
     * 非main函数可以互相调用。
     * 函数调用时传参需要和形参个数一致。数据类型可以转化即可（自动类型提升）。
     */

    //main函数默认返回0，其他函数没有默认返回值。main函数返回0表示成功。
    return 0;
}

