#include <stdio.h>
#include <stdlib.h>

/* Try to use struct pointers */


struct Student {
    char cName[20];
    int iNumber;
    char cSex;
    int iGrade;
}student={"Girl",2021,'w',3};

int main(void){
    struct Student *pStruct;
    pStruct = &student;
    printf("-------------the student information------------\n");
    printf("cNmame:%s\n",(*pStruct).cName);
    printf("iNumber:%d\n",(*pStruct).iNumber);
    printf("cSex:%c\n",(*pStruct).cSex);
    printf("iGrade:%d\n",(*pStruct).iGrade);
    printf("============使用->符号引用结构体成员==============\n");  // 结构体指针直接获取结构体成员
    printf("cNmame:%s\n",pStruct->cName);
    printf("iNumber:%d\n",pStruct->iNumber);
    printf("cSex:%c\n",pStruct->cSex);
    printf("iGrade:%d\n",pStruct->iGrade);
    printf("============使用结构体名称引用结构体成员==============\n");
    printf("cNmame:%s\n",student.cName);
    printf("iNumber:%d\n",student.iNumber);
    printf("cSex:%c\n",student.cSex);
    printf("iGrade:%d\n",student.iGrade);
}