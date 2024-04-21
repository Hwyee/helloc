//
// Created by ProjectWind on 2024/4/21.
// 数组的应用
#include <stdio.h>
#include <string.h>

int main() {
    /**
     * 数组的复制
     */
    //方式1：循环
    int arr[3] = {1, 2, 3};
    int arr_copy1[3];
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        arr_copy1[i] = arr[i];
    }

    //方式2：memcpy()
    int arr_copy2[3];
    //参数：目标数组，原数组，复制的字节数
    memcpy(arr_copy2, arr, sizeof(arr));
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i){
        printf("arr_copy1:%d\narr_copy2:%d\n", arr_copy1[i], arr_copy2[i]);
    }

    //错误的方法:此时操作arr_error就是操作arr，他们指向的是同一块内存空间
    int *arr_error = arr;
    arr_error[0]=100;
    printf("\narr:%d\narr_copy1:%d\narr_copy2:%d\n", arr[0], arr_copy1[0], arr_copy2[0]);
    return 0;
}