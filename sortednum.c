#include<stdio.h>
#define ARR_LEN 3

void main() 
{
    int arr[ARR_LEN] = { 0 };
    int temp = 0;

    // ����������
    for (int i = 0; i < ARR_LEN; i++)
    {
        printf("�������%d������ֵ��", i + 1);
        scanf("%d", &arr[i]);
    }

    // ����
    for (int i = 0; i < ARR_LEN - 1; i++)
    {
        for (int j = 0; j < ARR_LEN - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // ������
    for (int i = 0; i < ARR_LEN; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}