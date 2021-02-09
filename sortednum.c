#include<stdio.h>
#define ARR_LEN 3

void main() 
{
    int arr[ARR_LEN] = { 0 };
    int temp = 0;

    // 读入三个数
    for (int i = 0; i < ARR_LEN; i++)
    {
        printf("请输入第%d个数的值：", i + 1);
        scanf("%d", &arr[i]);
    }

    // 排序
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

    // 输出结果
    for (int i = 0; i < ARR_LEN; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}