

// 失效的指针


#include <stdio.h>


int main(void)
{
    void (*p)(); // 定义了一个指针


    int a = 100;
    p = &a; // 让指针p指向了a


    printf("&a: %#x\n", &a); // 将a的地址以十六进制输出
    printf("*p: %#x\n", *p);  // 将p的目标（即a）的值以十六进制输出
}