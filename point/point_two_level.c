//
// Created by ProjectWind on 2024/4/21.
// 二级指针
#include <stdio.h>
#include <malloc.h>

int main(){
    int num = 10;
    int *p1 = &num;
    int *p2 = p1;//这种不是二级指针，都是指向num地址的指针。

    /**
     * 这种写法也不对
     */
    int *p3 = &p1;
    printf("p1 = %p\n", p1);
    printf("p1 addr = %p\n", &p1);
    printf("p3 = %p\n", p3);
    printf("p3 value = %p\n", *p3);
//    printf("p3 value = %d\n", **p3);

    //正确写法
    int **p4 = &p1;
    printf("p4 value = %p\n", *p4);
    printf("p4 value = %d\n", **p4);//10

    int row = 3;
    int column = 4;
    //初始化二维数组
    int ** arr2= (int**)malloc(row*sizeof (int *));
    for (int i =0;i<row;i++){
       arr2[i] = (int *) malloc(column * sizeof(int));
    }
    free(arr2);

    return 0;
}
