//
// Created by ProjectWind on 2024/4/21.
// 字符数组和字符指针
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world!";
    //字符指针变量
    char *pstr = str;
    printf("pstr addr:%p\n", pstr);
    printf("pstr value:%s\n", pstr);


    //字面量字符串不可变性
    char arr[] = "hell0";
    arr[0] = 'd';
//    arr[0] = "m"; //报错
    printf("arr value:%s\n", arr);

    char *parr = "hello";
    parr = "32342";//指针是变量，可以修改，数组是常量，不能修改。
    printf("parr value:%s\n", parr);//32342

    printf("sizeof arr:%llu\n", sizeof(arr));
    printf("sizeof parr:%llu\n", sizeof(parr));// 32 位系统中，指针变量的大小为 4 字节（32 位），在 64 位系统中，指针变量的大小为 8 字节（64 位）。
    printf("strlen parr:%llu\n", strlen(parr));


    //字符串数组
    char arrString[][11] = {"aa", "g2352xcc3"};//需要自己指定字符串长度，可能会有空间浪费
    printf("sizeof arrString[0]:%llu\n", sizeof(arrString[0]));//11
    printf("sizeof arrString[1]:%llu\n", sizeof(arrString[0]));//11

    //使用字符指针数组，自动取字符串最大长度
    char *pArrString[] = {
            "aa", "g2352xcc3"
    };
    printf("pArrString[0]:%p\n", pArrString[0]);//地址
    printf("pArrString[0]:%c\n", *pArrString[0]);//a
    printf("sizeof pArrString[0]:%llu\n", sizeof(pArrString[0]));//这里求的是指针变量的长度：8
    printf("sizeof pArrString[1]:%llu\n", sizeof(pArrString[1]));//8
    printf("strlen pArrString[1]:%llu\n", strlen(pArrString[1]));//9
    for (int i = 0; i < sizeof(pArrString) / sizeof(pArrString[0]); ++i) {
        printf("%s\t", pArrString[i]);//值aa g2352xcc
    }
    printf("\n");

    return 0;
}
