//
// Created by ProjectWind on 2024/4/23.
// 变量的存储方式：静态存储方式、动态存储方式
#include <stdio.h>

/**
 * 动态存储方式 也称为自动变量 使用auto修饰，也可以省略
 * 程序运行期间根据需要动态分配存储空间，数据存储在动态存储区。
 * 函数的形参、函数体内的变量（未被static修饰）、函数返回的地址、寄存器变量
 *
 * @return
 */
int dynamic_var() {
    //每次执行都会初始化赋值。 而且自动变量没有默认值。是一个不确定的值。
    auto int a = 10;
    a++;
    return a;
}

/**
 * extern 修饰的变量没初始化不能直接使用否则报错。undefined reference to `a1'
 * 他是告诉编译器此变量在其他文件定义，extern用在一个文件中引用另一个文件中定义的全局变量，函数或者全局函数声明。
 * extern 变量实际上是在其他文件中定义的，它们的存储位置由定义它们的文件决定，可以是静态存储区，也可以是全局存储区。
 * 慎重使用，因为其他文件也可以使用、改变这个变量。
 */
extern int a1 ;

static int a2;

int a1 = 10;
/**
 * 静态存储方式   存储时间较长
 * 函数体内用static修饰的局部变量、全局变量（不使用extern修饰，不使用malloc修饰）
 * 在整个程序运行过程中都是有效的 ，存储在静态存储区。
 * 用static修饰的全局变量仅在本文件生效。
 * 只会赋值初始化一次。
 * @return
 */
int static_var() {
    //一个程序运行期间，这个初始化赋值语句只会执行一次。 作用域还是局部变量的作用域。
    static int s = 10;
    s++;
    //默认值0
    static int a;
    a++;
    printf("static var a = %d\n", a);
    return s;
}

int main() {
    int d1 = dynamic_var();
    printf("dynamic var a = %d\n", d1);//11
    int d2 = dynamic_var();
    printf("dynamic var a = %d\n", d1);//11

    int r1 = static_var();
    printf("static var s = %d\n", r1);//11
    int r2 = static_var();
    printf("static var s = %d\n", r2);//12

    printf("extern var a1 = %d\n", a1);
    return 0;
}
