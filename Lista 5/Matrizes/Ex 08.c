#include<stdio.h>
#include<math.h>

void sum(float mat1[2][2], float mat2[2][2]);
void dif(float mat1[2][2], float mat2[2][2]);
void cons(float mat1[2][2], float mat2[2][2], float c);
void mat_print(float mat[2][2]);

int main(){
    float mat1[2][2], mat2[2][2], c;
    int i, j;
    char op;
    for(i=0; i<2; i++){
        printf("Insira os valores da linha %d\n", i+1);
        for(j=0; j<2; j++){
            scanf("%f", &mat1[i][j]);
        }
    }
    for(i=0; i<2; i++){
        printf("Insira os valores da linha %d\n", i+1);
        for(j=0; j<2; j++){
            scanf("%f", &mat2[i][j]);
        }
    }
    do{
        printf("Insira uma opcao:\n");
        printf("a) somar as duas matrizes\n");
        printf("b) subtrair a primeira matriz da segunda\n");
        printf("c) adicionar uma constante as duas matrizes\n");
        printf("d) imprimir as matrizes\n");
        scanf(" %c", &op);
    } while(!((op>='a'&&op<='d')||(op>='A'&&op<='D'))); //Se op não tiver entre os dois intervalos roda de novo

    if(op=='a'||op=='A'){
        sum(mat1, mat2);
    } else if(op=='b'||op=='B'){
        dif(mat1, mat2);
    } else if(op=='c'||op=='C'){
        printf("\nInsira uma constante: ");
        scanf("%f", &c);
        cons(mat1, mat2, c);
    } else{
        mat_print(mat1);
        printf("\n");
        mat_print(mat2);
    }
}

void sum(float mat1[2][2], float mat2[2][2]){
    int i, j;
    float matres[2][2];
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            matres[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    mat_print(matres);
}

void dif(float mat1[2][2], float mat2[2][2]){
    int i, j;
    float matres[2][2];
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            matres[i][j]=mat1[i][j]-mat2[i][j];
        }
    }
    mat_print(matres);
}

void cons(float mat1[2][2], float mat2[2][2], float c){
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            mat1[i][j]+=c;
            mat2[i][j]+=c;
        }
    }
    mat_print(mat1);
    printf("\n");
    mat_print(mat2);
}

void mat_print(float mat[2][2]){
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            if(mat[i][j]<10&&mat[i][j]>=0){ //Se o numero tiver so um digito, imprime espaços pra centralizar
                printf("%.1f ", mat[i][j]);
                printf("   ");
            } else if(fabs(mat[i][j])<10){ //Se o numero tiver so um digito, mas negativo(não precisa checar se é negativo, primeira verificação já fez isso), imprime espaços pra centralizar
                printf("%.1f ", mat[i][j]);
                printf("  ");
            } else if((mat[i][j])<100&&mat[i][j]>0){
                printf("%.1f ", mat[i][j]);
                printf("  ");
            } else if(fabs(mat[i][j])<100){
                printf("%.1f ", mat[i][j]);
                printf(" ");
            } else if((mat[i][j])<1000&&mat[i][j]>0){
                printf("%.1f ", mat[i][j]);
                printf(" ");
            } else{ //Só centraliza se o número tiver 4 ou menos espaços, para generalizar, eu precisaria da quantidade de espaços do maior da coluna e/ou linha da matriz
                printf("%.1f ", mat[i][j]);
            }
        }
        printf("\n");
    }
}