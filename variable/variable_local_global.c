//
// Created by ProjectWind on 2024/4/23.
// 局部变量 全局变量
#include <stdio.h>

/**
 * 全局变量
 * 函数外声明的变量
 * 在全局变量之后定义的函数，都可以使用全局变量。
 * 全局变量有默认值，初始化值。初始值是0或者NULL，看数据类型。
 * 内存占用时间长，随着程序结束而结束。降低程序可靠性。
 * @return
 */
int global_var1 = 111;

/**
 * 局部变量
 * 函数内声明的、函数形参、代码块内.
 * 局部变量没有默认值（初始化值），使用前必须赋值。
 * @return
 */
void local_var(int a) {
    int b = 10;
    {
        int c = 11;
        printf("c = %d\n", c);
    }
    //printf("c = %d\n", c);
    printf("global_var1 = %d\n", global_var1);
    //printf("global_var2 = %d\n", global_var2);
}

int global_var2 = 222;

int main() {
    local_var(1);
    printf("global_var2 = %d\n", global_var2);//222
    /**
     * 全局变量与局部变量的就近原则
     */
    int global_var2 = 333;
    printf("global_var2 = %d\n", global_var2);//333
    return 0;
}
