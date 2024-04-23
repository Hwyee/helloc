//
// Created by ProjectWind on 2024/4/22.
// 函数参数传递
#include <stdio.h>
#include <string.h>

/**
 * 值传递
 * 将值复制传递给形参,不会影响传递前的参数值变化
 * 基本数据类型、结构体、共用体、枚举
 * @param a
 */
void base_trans(int a) {
    a = 20;
}

/**
 * 地址传递
 * 传递的是参数的地址，会影响实参参数值
 * 指针或者数组
 * @param arr
 */
void arr_trans(int arr[]) {
    arr[0] = 10000;
}

void arr_trans2(int *arr) {
    arr[0] = 20000;
}

/**
 * 指针数组
 * 其实也相当于指针的指针
 *
 * 指针+1 加的是指针类型的字节数
 * 指针的指针 +1 加的是指针所指指针数据的容量
 * 其实就是运算不同。
 * @param arr
 */
void point_arr_trans(char *arr[]) {
    arr[0] = "point_arr_trans";
}

void point_arr_trans2(char **arr) {
    arr[0] = "point_arr_trans2";
}

void point_trans(int *p) {
    *p = 30000;
}

/**
 * 函数不要返回内部变量的指针，因为方法结束就被回收了。
 * @return
 */
int *error_func() {
    int i = 10;
    return &i;
}

int main() {
    //1.对于基本数据类型，传递的是保存的数据值
    int a = 10;
    printf("base_trans func called front : %d\n", a);//10
    base_trans(a);
    printf("base_trans func called behind : %d\n", a);//10

    //2.针对数组类型，传递的是地址
    int arr1[] = {1, 2, 3};
    printf("arr_trans func called front : %d\n", arr1[0]);//1
    arr_trans(arr1);
    arr_trans2(arr1);
    printf("arr_trans func called behind : %d\n", arr1[0]);//20000

    /**
     * 指针数组和二维字符数组是两种不同的概念。
     *  1.指针数组：指针数组是一个数组，其中的每个元素都是一个指针。这些指针可以指向任意类型的数据，包括字符型数据。
     *    在 C 语言中，常常用指针数组来存储字符串。
     *    指针数组在内存中存储的字符串不一定是连续的。
     *  2.二维字符数组：二维字符数组是一个数组，其中的每个元素也是一个数组，通常用于存储字符串。
     */
    //char arr[][6] = {"str1","str2"};//修改后的值为凍 用指针数组定义字符数组就没有这种情况
    char *arr[] = {"str1", "str2"};
    printf("point_arr_trans func called front : %s\n", arr[0]);//str1
    printf("point_arr_trans func called front size : %llu\n", sizeof(arr[1]));
    point_arr_trans(arr);
    point_arr_trans2(arr);
    printf("point_arr_trans func called behind : %s\n", arr[0]);//point_arr_trans2
    printf("point_arr_trans func called behind size : %llu\n", sizeof(arr[1]));


    /**
     * 指针数组在内存中存储的字符串不一定是连续的。
     */
    char *point_arr[] = {"str1", "str2", "str3"};
    // 输出每个字符串的地址
    for (int i = 0; i < 3; i++) {
        printf("String %d address: %p\n", i, (void *) point_arr[i]);
    }

    //3.对于指针,将指针变量保存的地址进行传递
    int *p = &a;
    printf("point_trans func called front : %d\n", *p);//1
    point_trans(p);
    printf("point_trans func called behind : %d\n", *p);//30000

}
