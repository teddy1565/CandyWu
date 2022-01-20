#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
typedef char *String;


int main(void) {
    FILE *fptr;
    FILE *outPtr;
    fptr = fopen("./input.txt","r");
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
    int score = 0;
    int A=0,B=0,C=0,D=0,E=0,F=0;
    while(fscanf(fptr,"%s %s %s %s %s %s %s %d",code,studentID,name,departMent,departmentLevel,credit,gender,score)!=EOF){
        printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\n",code,studentID,name,departMent,departmentLevel,credit,gender);
        printf("%d",score);
        if (score >= 90) {
            A++;
        } else if (score >= 80) {
            B++;
        } else if (score >= 70) {
            C++;
        } else if (score >= 60) {
            D++;
        } else if (score >= 40) {
            E++;
        } else {
            F++;
        }
    }
    printf("%d\t%d\t%d\t%d\t%d",A,B,C,D,E,F);
    free(code);
    free(studentID);
    free(name);
    free(departMent);
    free(departmentLevel);
    free(credit);
    free(gender);

    fclose(fptr);
    system("pause");
    return 0;
}