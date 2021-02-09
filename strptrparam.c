#include <stdio.h>
#include <stdlib.h>

/* Try to use struct pointer as parameter for a function */


struct stu {
    char *name;
    int score;
}stus[]={
    {"xiaoming",98},
    {"xiaohong",90}
};

void averge(struct stu *, int);

int main(void){

    int len = sizeof(stus)/sizeof(struct stu);
    int a = 100;
    int b = 200;
    int *p1;
    p1 = &a;

    int **p2;
    p2 = &p1;

    printf("---start-----\n");
    printf("b = %d\n",b);
    printf("p1 = %p p2 = %p\n",p1,p2);
    printf("a = %d\n",*p1);
    //averge(stus,len);
}


void averge(struct stu *stus,int len){
    char *name;
    int score;
    int sum = 0;

    for(int i=0;i<len;i++){

        name = stus[i].name;
        //score = (*(stus+i)).score;
        score = (stus+i)->score;
        sum += score;

        printf("%s-----------%d\n",name,score);
    }

    printf("the averge is: %d\n",sum/len);


}