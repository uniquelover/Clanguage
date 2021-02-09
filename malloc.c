#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char name[100];
    char *description;


    strcpy(name, "Lebron James");

    /*¶¯Ì¬·ÖÅäÄÚ´æ*/

    description = malloc(200 * sizeof(char));
    if(description == NULL){
        fprintf(stderr, "Error-unbale to allocate required memory\n ");
    }

    else{
        strcpy(description, "Lebron James a DPS student in class 10th");
    }
    printf("Name = %s\n", name);
    printf("Description: %s\n", description);
}