#include <stdio.h>

//
// Created by ProjectWind on 2024/4/11.
//
int main(){
    //应该先定义b，再定义a，因为程序是顺序执行的，a用到了b变量，但是b变量还没定义。
//    int a = b+1;
//    int b = 0;
    int b = 0;
    int a = b+1;
    printf("a = b+1 -> %d",a);
    return 0;
}