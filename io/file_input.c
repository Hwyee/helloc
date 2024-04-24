//
// Created by ProjectWind on 2024/4/24.
// 读取文件
#include <stdio.h>

int main(){
    //1.声明文件路径
    char *filePath = "./test.txt";
    /**
     * 打开文件
     * 读取文件时，文件需要存在
     */
    FILE *fp = fopen(filePath, "r");
    /**
     * 读数据
     * fgetc()每次读一个字符，发生错误返回EOF
     * fgets()读字符串，读一行，遇到换行结束。发生错误返回EOF
     * fscanf()读字符串,%s遇到第一个空格就会退出
     *
     * 以上函数读取时，会接着之前读取到的位置进行读取。
     */
    char buffer[200];
//    fscanf(fp, "%s",buffer);
//    printf("buffer : %s\n", buffer);
    //遇到换行符结束读取
    fscanf(fp, "%[^\n]",buffer);
    printf("buffer 2: %s\n", buffer);

    //fgets()
    fgets(buffer, 200, fp);
    while(fgets(buffer, 200, fp) != NULL){
        printf("buffer fgets : %s", buffer);
    }

    /**
     * 关闭文件
     */
    fclose(fp);
    return 0;
}
