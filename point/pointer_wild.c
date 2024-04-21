//
// Created by ProjectWind on 2024/4/21.
// 野指针
#include <stdio.h>
int *test(){
    int a = 10;
    return &a;
}

int main(){
    //1.未初始化
    int *p1;
//    p1 = 10;//赋值错误

    //2. 指针越界访问
    int arr[3] = {1,2,3,};
    //int *p2 = &arr[3];
    //3.指针指向以释放的空间
    int *p3 = test();
    printf("p3 = %d\n", p3);
    //避免野指针
    //1.初始化
    int *p = NULL;
    //2.小心指针越界
    //3.避免返回局部变量的值
    //4.指针指向的空间释放，及时设置NULL
    //5.使用指针判断是否是NULL


    return 0;
}

