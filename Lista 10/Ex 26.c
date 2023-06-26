#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct aluno{
    char mat[30], sur[30];
    int y;
};

int main(){
    FILE *fp;
    struct aluno *a=NULL, buf;
    char op;
    int i=0, l;

    if((fp=fopen("cadastro.txt", "r+"))==NULL){
        if((fp=fopen("cadastro.txt", "w+"))==NULL){
            printf("Erro ao abrir o arquivo");
            exit(1);
        }
        printf("Criado um novo arquivo\n");
    } else{
        printf("Voce quer carregar os dados do arquivo?(Y/N) ");
        scanf("%c", &op);
        while(op!='Y'&&op!='y'&&op!='N'&&op!='n'){
            printf("Opcao invalida, tente novamente: ");
            setbuf(stdin, NULL);
            scanf("%c", &op);
        }
        if(op=='Y'||op=='y'){
            while(1){
                fscanf(fp, "%s%s%d", buf.mat, buf.sur, &buf.y);
                if(feof(fp)){
                    break;
                }
                fseek(fp, 2, SEEK_CUR); //Andando o \n
                i++;
                if((a=(struct aluno *)realloc(a, i*sizeof(struct aluno)))==NULL){
                    printf("Erro de alocacao");
                    exit(1);
                }
                strcpy(a[i-1].mat, buf.mat);
                strcpy(a[i-1].sur, buf.sur);
                a[i-1].y=buf.y;
            }
        }
    }
    fclose(fp);
    printf("Insira quantos alunos devem ser armazenados: ");
    scanf("%d", &l);
    while(l<0){
        printf("Numero invalido, tente novamente: ");
        scanf("%d", &l);
    }
    l+=i;
    if((a=(struct aluno *)realloc(a, l*sizeof(struct aluno)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    if((fp=fopen("cadastro.txt", "a"))==NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    if(i==0){
        i++; //Adequando ao formato do for, com o [i-1]
        l++;
    }
    for(; i<l; i++){
        printf("Insira a matricula do aluno: ");
        setbuf(stdin, NULL);
        fgets(a[i-1].mat, 30, stdin);
        a[i-1].mat[strlen(a[i-1].mat)-1]='\0';
        printf("Insira o sobrenome do aluno: ");
        setbuf(stdin, NULL);
        fgets(a[i-1].sur, 30, stdin);
        a[i-1].sur[strlen(a[i-1].sur)-1]='\0';
        printf("Insira o ano de nascimento do aluno: ");
        scanf("%d", &a[i-1].y);
        fprintf(fp, "%s, %s, %d\n", a[i-1].mat, a[i-1].sur, a[i-1].y);
    }
    fclose(fp);
    if((fp=fopen("cadastro.txt", "r"))==NULL){
        printf("Erro na abertura do arquivo");
        exit(1);
    }
    printf("As informacoes registradas sao:\n\n");
    while((op=getc(fp))!=EOF){
        printf("%c", op);
    }
    fclose(fp);
    free(a);
    return 0;
}