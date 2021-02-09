#include <stdio.h>

/* 练习指针*/

char *returnStr1();


int main(void){

    printf("--------1------------\n");
    int *p;
    int a = 99;

    printf("a = %d\n",a);
    p = &a;

    *p = 100;

    printf("a = %d\n",a);

    printf("--------2-----------\n");

    char *str = NULL;
    str = returnStr1();

    printf("%s\n",str);
    
    printf("---------3--------\n");  
    int *m,*n;
    m = (char *)malloc(10);  // 在内存的动态存储区中分配一块长度为size字节的连续区域，参数size为需要内存空间的长度
    n = m;
    m = (char *)realloc(m,1000);  // 原有内存内容不变
    printf("m=0x%x\n",m);
    printf("n=0x%x\n",n);


    return 0;
}


char *returnStr1(){
    char *p = "hello world!";
    return p;
}

