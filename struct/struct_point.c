//
// Created by ProjectWind on 2024/4/24.
// 结构体指针
#include <stdio.h>

struct Car{
    int a;
}*cp1;

void add(struct Car *c){
    (*c).a = 100;
}

void add_value(struct Car c){
    c.a = 300;
}

int main(){
    struct Car c1 = {1};
    /**
     * 1.声明结构体指针 指向单一的结构体变量
     */
    struct Car * cp  = &c1;
    printf("cp : %p\t a:%d\n",cp,(*cp).a);
    //不能直接使用，野指针
    //printf("cp1 : %p\t a:%d\n",cp1,(*cp1).a);

    /**
     * 2.结构体指针传参
     * 地址传递
     */
    add(cp);
    printf("cp : %p\t a:%d\n",cp,(*cp).a);

    /**
     * 结构体是值传递
     */
    add_value(c1);
    printf("c1 : %p\t a:%d\n",&c1,c1.a);

    /**
     * 3.指向结构体数组
     */
    struct Car carr[] = {1,2};
    cp = carr;

    return 0;
}
