#include <stdio.h>

//
// Created by ProjectWind on 2024/4/11.
// 数组
int main() {
    /**
     * 相同类型，顺序排列，连续空间，不能扩容
     * 扩容需要新建数组，然后copy
     */
    printf("\n**************array define********************\n\n");
    int arr[20];
    arr[0] = 2;
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);//没赋值的话，会随机给一个值。
    //c语言数组下标越界不会报错，也能使用，但是这个会改变其他内存区域存储的值，危险。程序卡死崩溃。exit code -1073741819 (0xC0000005)
//    arr[30] = 50;
//    printf("%d\n", arr[30]);
//    arr[-10] = -40;
//    printf("%d\n", arr[-10]);
    //一个int占用4个字节，所以打印的结果是80
    printf("arr array's byte length:%llu\n", sizeof(arr));
    printf("arr array's length:%llu\n", sizeof(arr) / sizeof(int));

    /**
     * 初始化赋值
     */
    printf("\n**************array init********************\n\n");
    //方法1
    int arr1[5] = {1, 2, 3};//剩余两个没赋值的，默认赋值为0
    printf("arr1 default 0 : %d\n", arr1[4]);
    //方法2
    int arr2[5] = {0};//整个数组初始化为0
    //方法3
    int arr3[] = {1, 2, 3};//这样赋值，数组长度就为3.
    //方法4
    int arr5[55] = {[0]=1,[33]=2,[2]=1,4,5,[33]=3,[44]=5,4};//同样未指定的默认赋值0.
    printf("arr5 index 33 : %d\n", arr5[33]);//3

    char arr6[] = {[10] ='c',[3] = 'a',1,'1',','};//没赋值的也是0，或者是'\0',0是控制字符NUL
    printf("arr6 index 0 : %c\n", arr6[0]);//
    printf("arr6 index 0 : %d\n", arr6[0]);//0

    /**
     * 数组遍历
     */
    printf("\n**************array traverse********************\n\n");

    for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); ++i) {
        printf("arr3 index %d = %d\n", i, arr3[i]);
    }

    for (int i = 0; i < sizeof(arr6) / sizeof(arr6[0]); ++i){
        printf("arr6 index %d = %d\n", i, arr6[i]);
    }

    /**
     * 错误写法
     * 程序会卡死崩溃。
     * exit code -1073741819 (0xC0000005)
     */
    //int arr4[3] = {1, 3, 4, 5};//编译器警告，程序卡死崩溃。
    //printf("%d", arr4[3]);//输出的值也不是5，是1.

    return 0;
}