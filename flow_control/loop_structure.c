//
// Created by ProjectWind on 2024/4/11.
//
#include <stdio.h>

/**
 * 循环结构：
 * 初始化
 * 循环条件
 * 循环体
 * 迭代语句
 * @return
 */
int main() {
    /**
     * for 循环。
     * for循环用逗号分割语句有局限性，用逗号分割的语句也完全放到别的地方。
     */
    int i;
    for ( i = 0,printf("for loop init:%d\n",i); i < 5 && i >= 0; ++i, --i, i++) {
        printf("for loop time:%d\n", i + 1);
    }

    /**
     * while循环。
     */
    int k = 0;
    while (k < 5) {
        printf("while loop time:%d\n", k + 1);
        k++;
    }

    /**
     * do while循环。
     * do while至少会执行一次循环体。
     */
    int j = 0;
    do {
        printf("do while loop time:%d\n", j + 1);
        j++;
    } while (j < 5);

    double ply = 0.1;
    while(ply < 9999){
        ply *= 2;
    }
    printf("thickness:%.2f\n", ply);

    //先执行!0,但是先计算 0!=0结果也是一样的,都能进去
    while(!0!=0){
        printf("!0 = %d\n", !0);
        break;
    }

    //99乘法表
    for (int l = 1; l <= 9; ++l) {
        for (int m = 1; m <= l ; ++m) {
            printf("%d ",l*m);
        }
        printf("\n");
    }

    /**
     * goto
     * 实现无条件的语句转移
     * goto label;
     * 少用goto,完全可以替换成其他方式。
     */
    i_am_label:
    goto label2;
    goto i_am_label;
    label2:
    printf("label2\n");

    return 0;
}