//
// Created by ProjectWind on 2024/4/11.
//
#include <stdio.h>
#include <time.h> // 用于获取当前时间
#include <stdlib.h>

int main() {
    //随机数种子。使用time(null)获取当前时间戳作为随机种子被认为是不安全的，可预测的。
    //如果不使用这个函数指定种子,则rand()函数生成的数是固定的，2024年4月11日00:49:14生成一直是41.
    srand(time(NULL));
    //rand()生成0-RAND_MAX的随机值
    int rand_max = RAND_MAX;//32767 有符号short类型最大值
    printf("RAND_MAX=%d\n", rand_max);
    int a = rand();
    if (a > 1) printf("%d > 1\n", a);
    else printf("%d <= 1\n", a);

    /**
     * switch-case
     * switch 可以判断整型、字符和枚举，不可以使用浮点型
     * 只能做等值判断
     * 遇到break则跳出判断，没有的话继续下个case判断（case穿透）
     * default语句的可选的
     */
    switch (0 / a) {
        case 0:
        case 90:
        case 100:
            printf("a-500=%d or %d\n", 90, 100);
        case 120:
            printf("a-500=%d\n", 120);//穿透后会直接执行下个case语句,不用进行判断，直到遇见break、default，或者case语句结束
            break;
        default:
            printf("default statement -> a-8000=%d\n", a - 8000);
    }

    return 0;
}