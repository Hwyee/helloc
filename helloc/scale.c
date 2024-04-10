#include <stdio.h>

//
// Created by ProjectWind on 2024/4/9.
// 进制
int main(){
    int a = 10;
    int b = 0b11;
    int c = 072;
    int d = 0xf;

    printf("decimalism:%d\n", a);
    printf("Octal:%o\n", a);
    printf("Hexadecimal:%x\n", a);

    printf("Hexadecimal:%##x\n", a);
    printf("Hexadecimal:%#x\n", a);

}