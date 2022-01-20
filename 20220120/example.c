#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int readFile(char *inputName,char *outputName) {
    FILE *fptr;
    FILE *foPtr;
    fptr = fopen(inputName,"r");
    foPtr = fopen(outputName,"w");
    if (fptr == NULL) {
        printf("Can't open file");
        fclose(fptr);
        fclose(foPtr);
        return 1;
    }
    fclose(fptr);
    fclose(foPtr);
}
int main()
{
    
    setlocale(LC_ALL, "");
    wchar_t c=L'Ｏ';
    wchar_t wstr[]=L"寬字串";
    printf("%lc",wstr[0]);
    printf("%lc,%ls",c, wstr);
    return 0;
}