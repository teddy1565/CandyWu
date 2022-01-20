#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
int mapID(char ch) {
    setlocale(LC_ALL, "");
    switch (ch) {
        case 'A':
            printf("%ls\t",L"台北市");
            break;
        case 'B':
            printf("%ls\t",L"台中市");
            break;
        case 'C':
            printf("%ls\t",L"基隆市");
            break;
        case 'D':
            printf("%ls\t",L"台南市"); 
            break;
        case 'E':
            printf("%ls\t",L"高雄市");
            break;
        case 'F':
            printf("%ls\t",L"新北市");
            break;
        case 'G':
            printf("%ls\t",L"宜蘭市");
            break;
        case 'H':
            printf("%ls\t",L"桃園市");
            break;
        case 'I':
            printf("%ls\t",L"嘉義市");
            break;
        case 'J':
            printf("%ls\t",L"新竹縣");
            break;
        case 'K':
            printf("%ls\t",L"苗栗縣");
            break;
        case 'M':
            printf("%ls\t",L"南投縣");
            break;
        case 'N':
            printf("%ls\t",L"彰化縣");
            break;
        case 'O':
            printf("%ls\t",L"新竹市");
            break;
        case 'P':
            printf("%ls\t",L"雲林縣");
            break;
        case 'Q':
            printf("%ls\t",L"嘉義縣");
            break;
        case 'T':
            printf("%ls\t",L"屏東縣");
            break;
        case 'U':
            printf("%ls\t",L"花蓮縣");
            break;
        case 'V':
            printf("%ls\t",L"台東縣");
            break;
        case 'W':
            printf("%ls\t",L"金門縣");
            break;
        case 'X':
            printf("%ls\t",L"澎湖縣");
            break;
        case 'Z':
            printf("%ls\t",L"連江縣");
            break;
        case '6':
            printf("%ls\t",L"取得國籍之外國人");
            break;
        case '7':
            printf("%ls\t",L"無戶籍國民");
            break;
        case '8':
            printf("%ls\t",L"港澳居民");
            break;
        case '9':
            printf("%ls\t",L"大陸地區居民");
            break;
        default:
            printf("%ls\t",L"其他");
            break;
    }
    return 0;
}
int main(int argc,char **argv) {
    char temp[11];
    FILE *fptr;
    fptr = fopen(argv[1],"r");
    if (fptr == NULL) {
        fclose(fptr);
        printf("Can't open this file\n");
        fptr = fopen("./ID.txt","r");
        if (fptr == NULL) {
            printf("Can't open this file\n");
            fclose(fptr);
            return 1;
        }
    }

    while(fscanf(fptr,"%s",temp)!=EOF) {
        printf("%cxxxxxxxxx\t",temp[0]);
        if (temp[1] == '1') {
            printf("F\t");
        } else {
            printf("M\t");
        }
        mapID(temp[0]);
        mapID(temp[2]);
        printf("\n");
    }
    fclose(fptr);
    return 0;
}