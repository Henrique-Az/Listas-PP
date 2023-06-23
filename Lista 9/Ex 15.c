#include<stdio.h>
#include<stdlib.h>

void sort(int m[2][3], int **v){
    int aux[2];
    if(v[m[0][1]][m[1][1]]>v[m[0][0]][m[1][0]]){
        aux[0]=m[0][1];
        aux[1]=m[1][1];
        m[0][1]=m[0][0];
        m[1][1]=m[1][0];
        m[0][0]=aux[0];
        m[1][0]=aux[1];
    }
    if(v[m[0][1]][m[1][1]]<v[m[0][2]][m[1][2]]){
        aux[0]=m[0][1];
        aux[1]=m[1][1];
        m[0][1]=m[0][2];
        m[1][1]=m[1][2];
        m[0][2]=aux[0];
        m[1][2]=aux[1];
    }
    if(v[m[0][1]][m[1][1]]>v[m[0][0]][m[1][0]]){
        aux[0]=m[0][1];
        aux[1]=m[1][1];
        m[0][1]=m[0][0];
        m[1][1]=m[1][0];
        m[0][0]=aux[0];
        m[1][0]=aux[1];
    }
}

int main(){
    int **p, m, n, i, j, maior[2][3];
    printf("Insira as dimensoes da matriz: ");
    scanf("%d%d", &n, &m);
    if((p=(int **)malloc(n*sizeof(int *)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<n; i++){
        if((p[i]=(int*)malloc(m*sizeof(int)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("Insira o valor da posicao [%d][%d]: ", i+1, j+1);
            scanf("%d", &p[i][j]);
            if(j+m*i<3){
                maior[0][j+m*i]=i;
                maior[1][j+m*i]=j;
            }
        }
    }
    sort(maior, p);
    for(i=m/3; i<n; i++){
        for(j=m%3; j<m; j++){
            if(p[i][j]>p[maior[0][2]][maior[1][2]]){
                maior[0][2]=i;
                maior[1][2]=j;
                sort(maior, p);
            }
        }
    }
    printf("Os tres maiores numeros sao: %d(Linha %d, coluna %d), %d(Linha %d, coluna %d), %d(Linha %d, coluna %d)", p[maior[0][0]][maior[1][0]], maior[0][0]+1, maior[1][0]+1, p[maior[0][1]][maior[1][1]], maior[0][1]+1, maior[1][1]+1, p[maior[0][2]][maior[1][2]], maior[0][2]+1, maior[1][2]+1);
    return 0;
    free(p);
}