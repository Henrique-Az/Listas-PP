#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct cidade{
    char nome[30];
    float x, y;
};

int dig(float n){
    int i=1;
    if(n<0){
        i++;
        n*=-1;
    }
    for(; n>10; i++){
        n/=10;
    }
    return i;
}

void centraliza(int d, int md){
    int i;
    for(i=md-d; i>0; i--){
        printf(" ");
    }
}

int main(){
    struct cidade *c;
    int N, i, j, mdig=0;
    float **dist;

    printf("Insira quantas cidades devem ser registradas: ");
    scanf("%d", &N);

    if((c=(struct cidade *)malloc(N*sizeof(struct cidade)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }

    for(i=0; i<N; i++){
        printf("Insira o nome da %d%c cidade: ", i+1, 167);
        setbuf(stdin, NULL);
        fgets(c[i].nome, 30, stdin);
        printf("Insira as coordenadas da cidade: ");
        scanf("%f%f", &c[i].x, &c[i].y);
    }

    if((dist=(float **)malloc(N*sizeof(void *)))==NULL){
        printf("Erro de alocacao");
        exit(1);
    }
    for(i=0; i<N; i++){
        if((dist[i]=(float*)malloc(N*sizeof(float)))==NULL){
            printf("Erro de alocacao");
            exit(1);
        }
        for(j=0; j<N; j++){
            dist[i][j]=sqrt(((c[i].x-c[j].x)*(c[i].x-c[j].x))+((c[i].y-c[j].y)*(c[i].y-c[j].y)));
            if(dig(dist[i][j])>mdig){
                mdig=dig(dist[i][j]);
            }
        }
    }
    printf("Essa eh a matriz de distancias entre as cidaeds:\n");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            centraliza(dig(dist[i][j]), mdig);
            printf("%.2f ", dist[i][j]);
        }
        printf("\n");
    }
    printf("Insira o numero de duas cidades: ");
    scanf("%d%d", &i, &j);
    printf("A distancia entre elas eh %.2f", dist[i-1][j-1]);
    for(i=0; i<N; i++){
        free(dist[i]);
    }
    free(dist);
    free(c);
    return 0;
}