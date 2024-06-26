//
// Created by ProjectWind on 2024/4/5.
//
#include <stdio.h> //引入标准库的头文件
#include "stdio.h" //尖括号直接去系统库头文件查找，双引号优先去当前源文件目录中查找，找不到再去系统库中。
#include "Windows.h"
/**
 * Hello World!
 * int main(void) 或者int main()标识main函数不接受参数。
 * void main()被认为是不标准的写法。可能报错。
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
     * %u:十进制无符号 无符号 int
     * %lu:无符号 long
     * %llu:无符号 long long
     * %p:指针
     *
     */
    SetConsoleOutputCP(65001);//解决Win中文编码问题
    printf("唐诗 %d 首:江畔何人初见%s,江月何年初照%s。\n",300,"月","人");
    //限定宽度
    printf("width: %10d\n",2000000);//默认右对齐
    printf("width: %-10d\n",20);//左对齐
    printf("保留两位小数:%.2f\n", 22.2222);
    printf("保留两位小数:%3.2f\n", 22.2222);
    //可以体会下这个宽度，如果不够的话补空格，够的话其实没影响。
    printf("保留两位小数:%7.2f\n", 22.2222);

    /**
     *
        puts 和 printf 是 C 语言中用于输出字符串的两个常见函数，它们之间有一些区别，主要体现在以下几个方面：
        语法：
        puts 函数的语法为：int puts(const char *str); 它只接受一个参数，即要输出的字符串，字符串末尾会自动添加换行符，并返回一个非负数表示成功，或者返回 EOF 表示失败。
        printf 函数的语法为：int printf(const char *format, ...); 它可以接受多个参数，其中第一个参数是格式化字符串，后面的参数是要输出的变量，不会自动添加换行符。
        功能：

        puts 函数主要用于输出字符串，并在字符串末尾自动添加换行符，通常用于输出简单的字符串。
        printf 函数除了可以输出字符串外，还支持格式化输出，可以输出各种类型的变量，并且可以根据格式化字符串的格式进行格式化输出，比如控制输出的精度、宽度、对齐方式等。
        返回值：

        puts 函数返回一个非负数表示成功，或者返回 EOF 表示失败。
        printf 函数返回输出的字符数（不包括结尾的空字符），或者在发生错误时返回一个负值。
        性能：

        由于 puts 函数只是简单地输出字符串并自动添加换行符，不涉及任何格式化操作，因此通常比 printf 函数执行速度更快。
        因此，根据具体的需求选择合适的函数进行字符串输出。如果只需要简单地输出字符串并自动换行，使用 puts 函数即可；如果需要进行格式化输出或者输出各种类型的变量，使用 printf 函数更为灵活。
     */
    printf("Hello,\nworld!\n"); // 使用 printf 函数输出字符串
    puts("Hello,");
    puts("world!"); // 使用 puts 函数输出字符串
    return 0;
}