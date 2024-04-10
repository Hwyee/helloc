#include <stdio.h>

//
// Created by ProjectWind on 2024/4/9.
// 进制
int main(){
    int a = 10;//十进制
    int b = 0b11;//二进制
    int c = 072;//八进制
    int d = 0xf;//十六进制

    printf("decimalism:%d\n", a);
    printf("Octal:%o\n", a);
    printf("Hexadecimal:%x\n", a);

    printf("Hexadecimal:%##x\n", a);
    printf("Hexadecimal:%#x\n", a);

}