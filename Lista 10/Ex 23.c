#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, temp;
    char prof[30];
    FILE *fp;

    if((fp=fopen("emp.txt", "w"))==NULL){
        printf("Erro na criacao do arquivo");
        exit(1);
    }

    for(i=0; i<5; i++){
        printf("Insira a %d%c profissao: ", i+1, 167);
        setbuf(stdin, NULL);
        fgets(prof, 30, stdin);
        prof[strlen(prof)-1]='\0';
        printf("Insira o tempo de servico do funcionario: ");
        scanf("%d", &temp);
        fprintf(fp, "%s, %d\n", prof, temp);
    }
    fclose(fp);
    printf("As informacoes lidas foram:\n\n");
    if((fp=fopen("emp.txt", "r"))==NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    while(1){
        fscanf(fp, "%30[^,], %d", prof, &temp);
        if(feof(fp)){
            break;
        }
        fseek(fp, 2, SEEK_CUR); //Andando o \n no final do int
        printf("%s, %d\n", prof, temp);
    }
    fclose(fp);
    return 0;
}