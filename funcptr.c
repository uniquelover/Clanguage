#include <stdio.h>
#include <stdlib.h>

/* Try to run function pointer methods */

int Max(int, int);

int Max(int x, int y){
    int z;
    if(x > y){
        z = x;
    }
    else{
        z = y;
    }
    return z;
}


int main(void){

    int(*p)(int, int);  // 定义一个函数指针
    int a,b,c;
    p = Max;
    printf("please input a and b\n");
    scanf("%d%d",&a,&b);
    c = (*p)(a,b);
    printf("a = %d\nb = %d\n2max = %d\n",a,b,c);
    return 0;

}