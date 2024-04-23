//
// Created by ProjectWind on 2024/4/23.
//函数指针 指向函数的指针
#include <stdio.h>

void func(int a){
    printf("func :%d\n",a);
}
int main(){
    /**
     * 函数指针声明格式：小括号不能丢
     * 返回值 (*函数指针名) (参数)
     */
    void (*func_point)(int);

    /**
     * 函数本身存储的就是地址
     * 以下两种写法一样
     */
    func_point = &func;
    func_point = func;

    /**
     * 函数指针调用函数
     */
    (*func_point)(10);

    /**
     * 函数指针进行加减法是没有意义的
     */
    //func_point++;


    return 0;
}


