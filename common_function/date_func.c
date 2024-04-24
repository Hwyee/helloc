//
// Created by ProjectWind on 2024/4/24.
// 时间函数
#include <stdio.h>
#include <time.h>

int main(){
    time_t c_time;
    time(&c_time);//获取当前时间戳
    printf("c_time = %lld\n", c_time);

    printf("c_time : %s\n", ctime(&c_time));



    return 0;
}
