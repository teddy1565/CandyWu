#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int mapID(char ch) {
    switch (ch) {
        case 'A':
            printf("%s\t","台北市");
            break;
        case 'B':
            printf("%s\t","台中市");
            break;
        case 'C':
            printf("%s\t","基隆市");
            break;
        case 'D':
            printf("%s\t","台南市"); 
            break;
        case 'E':
            printf("%s\t","高雄市");
            break;
        case 'F':
            printf("%s\t","新北市");
            break;
        case 'G':
            printf("%s\t","宜蘭市");
            break;
        case 'H':
            printf("%s\t","桃園市");
            break;
        case 'I':
            printf("%s\t","嘉義市");
            break;
        case 'J':
            printf("%s\t","新竹縣");
            break;
        case 'K':
            printf("%s\t","苗栗縣");
            break;
        case 'M':
            printf("%s\t","南投縣");
            break;
        case 'N':
            printf("%s\t","彰化縣");
            break;
        case 'O':
            printf("%s\t","新竹市");
            break;
        case 'P':
            printf("%s\t","雲林縣");
            break;
        case 'Q':
            printf("%s\t","嘉義縣");
            break;
        case 'T':
            printf("%s\t","屏東縣");
            break;
        case 'U':
            printf("%s\t","花蓮縣");
            break;
        case 'V':
            printf("%s\t","台東縣");
            break;
        case 'W':
            printf("%s\t","金門縣");
            break;
        case 'X':
            printf("%s\t","澎湖縣");
            break;
        case 'Z':
            printf("%s\t","連江縣");
            break;
        case '6':
            printf("%s\t","取得國籍之外國人");
            break;
        case '7':
            printf("%s\t","無戶籍國民");
            break;
        case '8':
            printf("%s\t","港澳居民");
            break;
        case '9':
            printf("%s\t","大陸地區居民");
            break;
        default:
            printf("%s\t","其他");
            break;
    }
    return 0;
}
int main(int argc,char **argv) {
    char temp[11];
    FILE *fptr;//宣告一個指向FILE 結構的指標
    fptr = fopen(argv[1],"r");//從cmd輸入的環境參數，開啟指定檔案 argv[1] 通常應該為./ID.txt
    if (fptr == NULL) { //如果開啟失敗則指標為NULL
        fclose(fptr);//嘗試將使用的指標釋放
        printf("Can't open this file\n");
        fptr = fopen("./ID.txt","r");//使用預設的路徑開啟檔案
        if (fptr == NULL) { //如果還是開啟失敗則退出程式
            printf("Can't open this file\n");
            fclose(fptr);
            return 1;
        }
    }

    while(fscanf(fptr,"%s",temp)!=EOF) {//開啟檔案後格式化逐行讀取進行解析
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
    fclose(fptr);//程式進行結束釋放檔案指標
    return 0;
}