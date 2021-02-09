#include <stdio.h>


typedef struct pointer
{
    /* data */
    char name[31];
    int age;
    float score;
}Student;


int main(){
    int a = 10,b; //变量a 数据值是10 地址是p，类型是int，4个字节，32位
    int *p,*q; // int 指针，保存是内存地址。*p指向int的指针变量
    p = &a; // 编号左值表达式，取出其表示内存位置。p =&a;时，p是int * 类型的变量，p里面装的是a变量的地址，它会指向那个a变量，但是不能访问a变量里面的值，如果想访问a变量的值，*p才可以访问
    printf("%x\n",&p); // 61fe00 16进制输出
    printf("%x\n",p);  // 61fe0c
    printf("%x\n", &a);  // 61fe0c
    printf("%d\n",a); // a 10;
    printf("%x\n", a); // 16进制 a
    b = *p + 3;  // *p == 10,b == 13; 把p指向内存的地址的值再加上3后赋值给b；
    *p = *p + 1; // 编号代表的值
    printf("%d,%d\n",a,b);


    q = p; // p == 11?
    *q= *q + 1;

    printf("%d,%d\n",a,b);


    char ch = 'c';
    char *cha;
    cha = &ch;
    printf("ch的地址是:%p\n",&ch);
    printf("%x\n",cha);
    printf("%x\n",&cha);
    printf("%x\n",*cha);

    int age = 23;
    int *p_age = &age;
    *p_age = 33;

    printf("age = %d\n",*p_age);
    printf("age = %d\n",age);

    Student stu = {"james",36,78.9};
    Student*ps = &stu;

    ps->age = 20;
    ps->score = 99.0;
    printf("name:%s age:%d score:%f\n",ps->name,ps->age,ps->score);
    return 0;	
}