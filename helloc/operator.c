#include <stdio.h>

//
// Created by ProjectWind on 2024/4/9.
// 运算符
int main(){
    int a = 2+1;
    int b = 17/2;//结果是8,向下取整，其实相当于是强转int了。
    double c = 17.0/2;
    printf("17/2 = %d\n",b);
    printf("17.0/2 = %.2f\n",c);
    int d = 17%2;//取余
    printf("17 % 2 = %d\n",d);
    printf("front ++ %d\n",++a);//打印加之后的值
    printf("behind ++ %d\n",a++);//打印加之前的值

    a+=1;
    a*=2;
    a%=2;
    //连续赋值
    int o,l;
    o = l = 10;//从右向左赋值。

    if(1==2){
        printf("1==2");
    } else{
        printf("1!=2\n");

    }

    printf("-128>>2=%d\n",-128>>3);
    a = 1==1?1:2;
    printf("ternary operator:(condition)?ex1:ex2; %d\n",a);

    //sizeof()
    /**
     * 返回某种数据类型或某个值占用的字节数量
     * 可以输入，数据类型，变量名，或者具体的值。
     * sizeof()返回值类型根据操作系统的类型不同而不同。
     * 可能是 unsigned int unsigned long unsigned long long
     * c语言创建了size_t类型来接收sizeof()的值
     *
     * size_t 在printf函数中用%zd,或%zu占位,如果系统不支持也可以用%u %lu打印
     */
    int int_cap = sizeof(int);
    printf("int_cap = %d\n", int_cap);//4
    int long_long_cap = sizeof(long long);
    printf("long_long_cap = %d\n", long_long_cap);//8
    printf("val_3_cap = %llu\n", sizeof(3));//8

    size_t size_t_test = sizeof(a);
    printf("size_t_test = %zu\n", size_t_test);//8

    return 0;
}
