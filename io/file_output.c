//
// Created by ProjectWind on 2024/4/24.
// 将数据写出到文件中
#include <stdio.h>

int main() {
    //1.声明文件路径
    char *filePath = "./test.txt";
    /**
     * 创建/打开文件
     * r模式是读取。
     * w模式是写操作，没有的话创建。从头开始写。
     * a模式是追加写，没有的话创建。
     * rb,wb,ab是对应的二进制形式。
     */
    FILE *fp = fopen(filePath, "w");
    /**
     * 写数据
     * fputc()每次写一个字符，发生错误返回EOF
     * fputs()写字符串，发生错误返回EOF
     * fprintf()写字符串
     */
    fputs("hello world!\n", fp);
    fputs("hello world!\n", fp);
    fprintf(fp, "你好,%s", "世界！");

    /**
     * 关闭文件
     */
    fclose(fp);

    return 0;
}
