//
// Created by ProjectWind on 2024/4/23.
// 结构体嵌套
#include <stdio.h>

typedef struct S1 {
    int a;
    int aa;
} S1;

typedef struct S2 {
    struct S1 s1;
    int b;
} S2;

typedef struct Node{
    int value;
    struct Node * next;
}Node;

int main() {
    S1 s1 = {11};
    S2 s2;
    //方式1.
    s2.s1.a = 1;
    s2.b = 2;
    //方式2.
    s2.s1 = s1;
    //方式3.
    S2 s22 = {1,2,2};
    S2 s222 = {.s1={1,2},.b=2};

    Node n1 = {1,NULL};
    Node n2 = {1,&n1};

    return 0;
}
