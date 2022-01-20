#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
typedef char *String;


int main(void) {
    FILE *fptr;
    FILE *outPtr;
    fptr = fopen("./input.txt","r");
    outPtr = fopen("./output.txt","w");
    if (fptr == NULL) {
        printf("Can't open file");
        exit(0);
    }
    String code = (char*) malloc(12*sizeof(char));
    String studentID = (char*) malloc(9*sizeof(char)) ;
    String name = (char*) malloc(10*sizeof(char));
    String departMent = (char*) malloc(30*sizeof(char));
    String departmentLevel = (char*) malloc(30*sizeof(char));
    String credit = (char*) malloc(20*sizeof(char));
    String gender = (char*) malloc(20*sizeof(char));
    String score = (char*) malloc(20*sizeof(char));
    while(fscanf(fptr,"%s %s %s %s %s %s %s %s",code,studentID,name,departMent,departmentLevel,credit,gender,score)!=EOF){
        if (name[2]==-95 && name[3]==64) {
            name[4] = 'O';
            name[5] = '\0';
        } else {
            name[2] = 'O';
            name[3] = ' ';
        }
        fprintf(outPtr,"%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",code,studentID,name,departMent,departmentLevel,credit,gender,score);
    }

    fclose(fptr);
    fclose(outPtr);
    return 0;
}