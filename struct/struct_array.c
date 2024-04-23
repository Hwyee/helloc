//
// Created by ProjectWind on 2024/4/23.
// 结构体数组
#include <stdio.h>

typedef struct A{
    int a;
    int b;
}A;

struct B{
    int a;
    int b;
}b1[] = {1,2,3,4};

int main(){

    A arr1[] = {{1,2},{3,4}};
    A arr2[] = {1,2,3,4};

    printf("arr1[0].a value:%d\n",arr1[0].a);


    return 0;
}