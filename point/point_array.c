//
// Created by ProjectWind on 2024/4/21.
// 指针和数组的操作
#include <stdio.h>

int main() {
    //指针下标 p[1] = p + 1

    //指针访问二维数组,arr2的地址是arr2[0]的地址，arr2[0]的地址是arr2[0][0]的地址
    int arr2[][3] = {{1, 3, 4},
                     {4, 5, 6},
                     {6, 7, 8}};

    printf("arr2[0] addr:%p\n", arr2);
    printf("arr2 addr:%p\n", &arr2);
    printf("arr2[0][0] addr:%p\n", arr2[0]);
    printf("arr2[0][0] addr:%p\n", &arr2[0][0]);

    /**
     * arr2[0][0]地址或值
     * 地址：&arr2[0][0],arr2[0],*arr2(arr2是arr2[0]的地址，地址里面存的就是arr2[0][0]的地址)
     * 值：arr2[0][0],*arr2[0],**arr2（arr2[0][0]的地址里面存的就是arr2[0][0]的值）
     */
    printf("******************** arr2[0][0] *********************\n");
    printf("arr2[0][0] addr:%p\n", &arr2[0][0]);
    printf("arr2[0][0] addr:%p\n", arr2[0]);
    printf("arr2[0][0] addr:%p\n", *arr2);
    printf("arr2[0][0] value:%d\n", arr2[0][0]);
    printf("arr2[0][0] value:%d\n", *arr2[0]);
    printf("arr2[0][0] value:%d\n", **arr2);

    /**
     * arr2[1]
     * 地址：&arr2[1],arr2+1(因为arr2是arr2[0]的地址，加1就是arr2[1]的地址了)
     */
    printf("******************** arr2[1] *********************\n");
    printf("arr2[1] addr:%p\n", &arr2[1]);
    printf("arr2[1] addr:%p\n", arr2 + 1);

    /**
     * arr2[1][0]
     * 地址：&a[1][0],a[1],*(a+1)
     * 值：a[1][0],*a[1],**(a+1)
     */
    printf("******************** arr2[1][0] *********************\n");
    printf("arr2[1][0] addr:%p\n", &arr2[1][0]);
    printf("arr2[1][0] addr:%p\n", arr2[1]);
    printf("arr2[1][0] addr:%p\n", *(arr2 + 1));
    printf("arr2[1][0] value:%d\n", arr2[1][0]);
    printf("arr2[1][0] value:%d\n", *arr2[1]);
    printf("arr2[1][0] value:%d\n", **(arr2 + 1));

    /**
     * 指针下标
     */
    printf("******************** point index *********************\n");
    int *p = arr2[0];//arr2[0]，arr2[0][0]的地址
    printf("arr2[1][2] addr:%d\n", *(p + 1 * 3 + 2));//6
    printf("arr2[1][2] addr:%d\n", p[1 * 3 + 2]);//6

    /**
     * 二维数组遍历，求最大值
     */
    int *p1, max;
    for (p1 = arr2[0], max = *p1; p1 < arr2[0] + 3 * 3; ++p1) {
        if (max < *p1) {
            max = *p1;
        }
    }
    printf("arr2 max = %d\n", max);

    /**
     * 数组指针和指针数组
     * 数组指针是指针（数组首地址）
     * 指针数组是存放指针的数组，是数组。
     *
     */
    //指针数组定义
    int a = 1, b = 2, c = 3;
    int *arr[3] = {&a, &b, &c};

    /**
     * 指向固定长度数组的指针变量
     * warning: initialization of 'int *' from incompatible pointer type 'int (*)[3]' [-Wincompatible-pointer-types]
     * 指针除了有地址外，还有类型，类型不匹配
     */
    //int *p2 = arr2;
    //正确写法，一定要加小括号，不加小括号就变成指针数组了。
    //int (*p3)[] = arr2;//需要指定数组长度，否则使用时报错：invalid use of array with unspecified bounds.
    int (*p4)[3] = arr2;
    int *p5 = arr2[0];
    /**
     * p4与p5所存储的地址虽然相同，但是类型却不同，所以指针进行计算时也有差别
     */
    //printf("p3 + 1:%p\n",(p3+1));
    printf("p4 + 1:%p\n",(p4+1));
    printf("p5 + 1:%p\n",(p5+1));


    return 0;
}
