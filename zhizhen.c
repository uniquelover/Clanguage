

// ʧЧ��ָ��


#include <stdio.h>


int main(void)
{
    void (*p)(); // ������һ��ָ��


    int a = 100;
    p = &a; // ��ָ��pָ����a


    printf("&a: %#x\n", &a); // ��a�ĵ�ַ��ʮ���������
    printf("*p: %#x\n", *p);  // ��p��Ŀ�꣨��a����ֵ��ʮ���������
}