#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int mapID(char ch) {
    switch (ch) {
        case 'A':
            printf("%s\t","�x�_��");
            break;
        case 'B':
            printf("%s\t","�x����");
            break;
        case 'C':
            printf("%s\t","�򶩥�");
            break;
        case 'D':
            printf("%s\t","�x�n��"); 
            break;
        case 'E':
            printf("%s\t","������");
            break;
        case 'F':
            printf("%s\t","�s�_��");
            break;
        case 'G':
            printf("%s\t","�y����");
            break;
        case 'H':
            printf("%s\t","��饫");
            break;
        case 'I':
            printf("%s\t","�Ÿq��");
            break;
        case 'J':
            printf("%s\t","�s�˿�");
            break;
        case 'K':
            printf("%s\t","�]�߿�");
            break;
        case 'M':
            printf("%s\t","�n�뿤");
            break;
        case 'N':
            printf("%s\t","���ƿ�");
            break;
        case 'O':
            printf("%s\t","�s�˥�");
            break;
        case 'P':
            printf("%s\t","���L��");
            break;
        case 'Q':
            printf("%s\t","�Ÿq��");
            break;
        case 'T':
            printf("%s\t","�̪F��");
            break;
        case 'U':
            printf("%s\t","�Ὤ��");
            break;
        case 'V':
            printf("%s\t","�x�F��");
            break;
        case 'W':
            printf("%s\t","������");
            break;
        case 'X':
            printf("%s\t","���");
            break;
        case 'Z':
            printf("%s\t","�s����");
            break;
        case '6':
            printf("%s\t","���o���y���~��H");
            break;
        case '7':
            printf("%s\t","�L���y���");
            break;
        case '8':
            printf("%s\t","��D�~��");
            break;
        case '9':
            printf("%s\t","�j���a�ϩ~��");
            break;
        default:
            printf("%s\t","��L");
            break;
    }
    return 0;
}
int main(int argc,char **argv) {
    char temp[11];
    FILE *fptr;//�ŧi�@�ӫ��VFILE ���c������
    fptr = fopen(argv[1],"r");//�qcmd��J�����ҰѼơA�}�ҫ��w�ɮ� argv[1] �q�`���Ӭ�./ID.txt
    if (fptr == NULL) { //�p�G�}�ҥ��ѫh���Ь�NULL
        fclose(fptr);//���ձN�ϥΪ���������
        printf("Can't open this file\n");
        fptr = fopen("./ID.txt","r");//�ϥιw�]�����|�}���ɮ�
        if (fptr == NULL) { //�p�G�٬O�}�ҥ��ѫh�h�X�{��
            printf("Can't open this file\n");
            fclose(fptr);
            return 1;
        }
    }

    while(fscanf(fptr,"%s",temp)!=EOF) {//�}���ɮ׫�榡�Ƴv��Ū���i��ѪR
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
    fclose(fptr);//�{���i�浲�������ɮ׫���
    return 0;
}