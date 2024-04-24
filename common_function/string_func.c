//
// Created by ProjectWind on 2024/4/24.
// 字符串
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    /**
     * 字符指针声明的字符串不可变
     * char数组声明的字符串可变
     */
    char arr[] = "hello";//每次开辟新的
    arr[0] = 'a';
    //arr = "abcde";数组变量所在的地址无法改变，或者说，编译器一旦为数组变量分配地址后，这个地址就绑定这个数组变量了，这种绑定关系是不变的，即不能用赋值运算符为它重新赋值。
    strcpy(arr, "abcde");
    printf("arr = %s\n", arr);
    char *cp = "hello";//只有一份
    //cp[0] = 'a';编译器没报错但是程序卡死
    printf("cp = %s\n", cp);

    /**
     * strncpy(arr1,arr2,n);
     */
    char a1[7] = "aaaaa";
    char a2[] = "bbbbb";
    strncpy(a1, a2, 3);
    printf("a1 = %s\n", a1);

    /**
     * strcat() 链接两个字符串
     * 可能发生缓冲区溢出，虽然这里没有报错。
     * 可以使用strncat()
     */
    strcat(a1, a2);
    printf("a1 = %s\n", a1);

    /**
     * strcmp()比较两个字符串。
     * 比较ASCII码值
     */
    printf("a1 > a1 = %d\n", strcmp(a1,a2));

    /**
     * strlwr(),转小写
     * strupr()转大写
     */
    strlwr(a1);
    printf("a1 = %s\n", a1);
    strupr(a1);
    printf("a1 = %s\n", a1);

    /**
     * 基本数据类型转字符串
     * sprintf();
     */
    char  str1[20] ;
    sprintf(str1, "%d %d %d", 1, 2, 3);
    printf("str1 = %s\n", str1);//1 2 3

    /**
     * 字符串转基本数据类型
     * atoi()//转int
     * atof()//转double
     */
    char str2[20] = "123456";
    char str3[20] = "123456.412";
    int i1 = atoi(str2);
    double f1 = atof(str3);
    printf("i1 = %d\n", i1);
    printf("f1 = %lf\n", f1);

    return 0;
}
