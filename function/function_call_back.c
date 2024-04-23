//
// Created by ProjectWind on 2024/4/23.
// 回调函数 函数指针的应用
#include <stdio.h>
#include <stdlib.h>

/**
 * 函数指针作为函数的参数
 * 此时p就是func的回调函数
 * @return
 */
int func(int x, int y, int (*p)(int, int)) {
    int res = (*p)(x, y);
    return res;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a > b ? b : a;
}


int sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 10;
    int b = 20;
    while (1) {
        printf("pls input a number (1~3) :");
        int input;
        /**
         * 输入`或者其他字符会导致程序崩溃。不知道为什么，无限执行printf语句，不走程序。
         */
        int s = scanf("%d", &input);
        if (s != 1) {
            continue;
        }
        int res;
        switch (input) {
            case 1:
                res = func(a, b, max);
                break;
            case 2:
                res = func(a, b, min);
                break;
            case 3:
                res = func(a, b, sum);
                break;
            default:
                printf("input error,program exit.\n");
                exit(EXIT_FAILURE);
        }
        printf("res = %d\n", res);
    }
}
