//
// Created by ProjectWind on 2024/4/22.
// main function param.
#include <stdio.h>
#include <stdlib.h>

void atexit_p(){
    printf("program will exit...\n");
}
/**
 * main函数传参只有两个参数
 * char *arg[] 也可以写成 char** argv用法完全一样
 * @param argc 命令行参数的数量,包括执行文件
 * @param arg 指向字符串数组的指针
 * @return
 */
int main(int argc,char *argv[]){
    printf("argc = %d\n", argc);
    for (int i = 0;i<argc;i++){
        printf("argv[%d] = %s\n",i,argv[i]);
    }
    /**
     * atexit接受一个无参无反参的函数，表示程序执行前必须要做的事情。
     * 但感觉上不是那么智能，因为此函数也得放到exit之前。
     */
    atexit(atexit_p);
    //其他函数也可以调用exit()，表示程序终止。
    exit(EXIT_SUCCESS);
    exit(EXIT_FAILURE);
    //main函数return执行时会隐式调用exit()
    return 0;
}
