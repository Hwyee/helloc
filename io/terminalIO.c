#include <stdio.h>

//
// Created by ProjectWind on 2024/4/7.
//
int main(){
//    scanf(); 这个函数会等待用户控制台输入。
//如果format字符串中间没有分隔符，则输入多个数可以使用空格或者回车隔开即可。
//如果有分隔符，则必须使用你指定的分隔符
    int a,b;
    printf("input a b value =");
//    scanf("%d%d", &a,&b);//&a是变量的地址。
    printf("new input a , b  value =");
//    scanf("%d,%d", &a,&b);//逗号分隔符
    printf("a=%d , b=%d\n", a,b);
    printf("a=%d , b=%d\n", a,b);

    //getchar(),putchar()
    /**
     * putchar()输出一个字符
     * getchar()输入一个字符
     */
    char c = getchar();//获取用户输入,和scanf一起使用好像有点问题,读取不了字符,似乎读取了回车
    putchar(c);
    printf("\nputchar\n");

    //gets(),puts()
    /**
     * puts()输出一个字符串 自带换行
     * gets()输入一个字符串
     */
    char str[] = {"puts()"};
    puts(str);

    char str1[11];
    gets(str1);//获取用户输入,保存再str1中
    puts(str1);

    return 0;
}