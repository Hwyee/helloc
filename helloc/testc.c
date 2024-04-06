//
// Created by ProjectWind on 2024/4/5.
//
#include <stdio.h> //引入标准库的头文件
#include "stdio.h" //尖括号直接去系统库头文件查找，双引号优先去当前源文件目录中查找，找不到再去系统库中。
/**
 * Hello World!
 * @return int 函数的返回值类型。
 */
int main(){
    printf("hello,world! - 2 \n");//Hello World!
    //程序正常执行结束。

    // **************************** printf() *************************************
    int res = 100;
    printf("res = %d\n", res);
    /**
     * 常见的占位符:
     * %c:字符类型
     * %d或者%i:int整形（十进制）
     * %ld:十进制long类型
     * %f:浮点类型float
     * %lf:浮点类型double
     * %s:字符串
     * %u:十进制无符号
     * %p:指针
     *
     */
    printf("唐诗 %d 首:江畔何人初见%s,江月何年初照%s。",300,"月","人");
    
    return 0;
}