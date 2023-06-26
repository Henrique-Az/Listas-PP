#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *fp;
    float t=0, p;
    char c;

    if((fp=fopen("compra.txt", "r"))==NULL){
        printf("Nao foi encontrado o arquivo");
        exit(1);
    }
    while((c=getc(fp)!=EOF)){
        while((c=getc(fp))!='\n');
        fseek(fp, -3, SEEK_CUR); //O \n conta como 2 bytes na memória, eu preciso andar 3 na primeira exec
        while(c!=' '){
            fseek(fp, -2, SEEK_CUR);
            c=getc(fp);
        }
        fscanf(fp, "%f", &p);
        fseek(fp, 2, SEEK_CUR); //Andando o \n
        t+=p;
    }
    printf("O total da compra eh %.2f reais", t);
    fclose(fp);
    return 0;
}