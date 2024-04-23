//
// Created by ProjectWind on 2024/4/23.
// 指针函数 返回值是指针
#include <stdio.h>
#include <malloc.h>

/**
 * 正确的
 * @param a
 * @return
 */
int * int_point(int *a){
    return a;
}

/**
 * 错误的
 * 局部变量随着函数执行结束就弹出栈。
 * @return
 */
 int * int_error_point1(int a){
     return &a;
 }

/**
  * 错误的
  * @return
  */
 int * int_error_point2(){
     int a = 10;
     return &a;
 }

 /**
  * 正确的
  * static修饰的变量，存储在静态数据区，不会随着函数的执行结束而销毁。
  * 而是随着程序的执行结束而销毁。
  * @return
  */
 int * int_correct_point1(){
     static int a = 10;
     return &a;
 }

 /**
  * malloc()分配的内存空间是存储在堆空间的
  * @return
  */
int * int_correct_point2(){
    int *a = (int *)malloc(sizeof(int));
    if(a != NULL){
        *a = 10;
    }
    return a;
}

int main(){
    int a = 10;
    int *p = int_point(&a);
    printf("p:%p\np value:%d\n", p,*p);

    int *p1 = int_correct_point2();
    printf("p1:%p\np1 value:%d\n", p1,*p1);

    return 0;
}