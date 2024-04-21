//
// Created by ProjectWind on 2024/4/21.
// 二维数组
#include <stdio.h>

int main() {

    int arr1[2][2] = {{1, 2},
                      {2, 3}};
    int arr2[][2] = {1, 2, 3, 4};
    int arr3[][2] = {[0][0]=1, [1][1]=2};

    /**
     * 内存中是线性，一行挨着一行存放的。
     *
     */
    printf("arr1_length:%llu\n", sizeof(arr1));//16
    printf("arr1_ele_num:%llu\n", sizeof(arr1) / sizeof(int));//4

    //获取各个元素的地址
    for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); ++i) {
        for (int j = 0; j < sizeof(arr1[0]) / sizeof(arr1[0][0]); ++j) {
            printf("a[%d][%d] = %p\n", i, j, &arr1[i][j]);
        }
    }
    //获取地址2
    printf("arr1:%p\n", arr1[0]);
    printf("arr1:%p\n", arr1[0] + 1);
    printf("arr1:%p\n", arr1[0] + 2);
    printf("arr1:%p\n", arr1[0] + 3);
    printf("arr1:%p\n", arr1[1]);//与arr1[0]+2的值相等，线性存储

    /**
     * 杨辉三角
     * 杨辉三角是一个由数字组成的三角形，其中每个数字是它上面两个数字的和。它的第 n 行（从 0 开始计数）有 n+1 个数字，第 k 个数字等于第 n-1 行的第 k-1 个数字与第 k 个数字之和。
     *
     * 组合数性质：杨辉三角的每个数字都代表了组合数（即从 n 个不同的元素中取 k 个元素的组合数），因此可以用于计算组合数和二项式系数。
     * 二项式展开：杨辉三角可以用于展开二项式表达式，例如 (a+b)^n，其中每一行代表了二项式表达式中的一个系数。
     * 数学归纳法：杨辉三角中的数字满足一定的递推关系，可以用来证明数学归纳法的一些性质。
     * 几何性质：杨辉三角具有许多几何性质，例如对称性、斜对角性质等，这些性质对于解决许多数学问题都是很有用的。
     */
    //二维数组存储10行杨辉三角
    int yanghui[10][10];
    for (int i = 0; i < sizeof(yanghui) / sizeof(yanghui[0]); ++i){
        yanghui[i][0] = 1;
        yanghui[i][i] = 1;
        for (int j = 1; j < i; ++j){
            yanghui[i][j] = yanghui[i-1][j-1] + yanghui[i-1][j];
        }
    }

    //打印杨辉三角
    for (int i = 0; i < sizeof(yanghui) / sizeof(yanghui[0]); ++i){
        for (int j = 0; j <= i; ++j){
            printf("%d\t", yanghui[i][j]);
        }
        printf("\n");
    }
    return 0;

}
