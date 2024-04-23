//
// Created by ProjectWind on 2024/4/23.
// 寄存器变量
#include <stdio.h>
/**
 * register 修饰
 * 存储在CPU的寄存器中。高速访问。
 * 编译器会自动将使用频繁的变量放到寄存器中，所以一般不用。
 * register 变量只能是自动变量（即局部变量），因为寄存器变量的生命周期必须与函数调用的生命周期相匹配。
 * 需要注意的是，register 关键字只是向编译器提出建议，让编译器尽可能地将该变量存储在寄存器中，但并不是强制性的。
 * 编译器可能会忽略 register 关键字的建议，因为现代编译器通常能够根据具体情况自动优化变量的存储方式。
 *
 */

//register int a;//register name not specified for 'a'

int main(){
    register int a = 10;

    return 0;
}