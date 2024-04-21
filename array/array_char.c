//
// Created by ProjectWind on 2024/4/21.
// 字符数组 字符串
#include <stdio.h>
#include <string.h>

int main(){
    /**
     * 字符数组以'\0'字符结尾，表示字符串的结束
     *
     */
     //方式1
    char str1[] = {'h','e', 'l', 'l', 'o', '\0'};
    char str11[] = {'h','e', 'l', 'l', 'o', '\0'};
    char str111[] = {0,'h','e', 'l', 'l', 'o', '\0'};
    //方式2,自动加'\0'
    char str2[] = {"hello world"};
    char str3[] = "hello world";

    //字符串对应数组的长度
    printf("str2_array_len:%llu\n", sizeof(str2) / sizeof(char));//12

    //字符串的长度：不包含'\0',应该是只统计第一个0前的字节
    printf("str2_string_len:%llu\n", strlen(str2));//11
    printf("str1_string_len:%llu\n", strlen(str1));//5
    printf("str11_string_len:%llu\n", strlen(str11));//5
    printf("str111_string_len:%llu\n", strlen(str111));//0

    //区分：'\0',0,'0'
    printf("\\0 == 0 : %d\n", '\0' == 0);
    printf("\\0 == '0' : %d\n", '\0' == '0');

    //错误写法,应该是硬生生在内存中找了一个字符串拼接上了
    char str33[5] = "hello";
    printf("str33_string_len:%llu\n", strlen(str33));//16
    puts(str33);//打印字符串 hellohello world

    return 0;
}
