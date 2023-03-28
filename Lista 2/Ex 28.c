#include<stdio.h>
#include<math.h>
int main(){
    float x,y,z;
    int op;
    do{
        printf("Escolha qual media deve ser usada:\n");
        printf("1- Geometrica\n");
        printf("2- Ponderada\n");
        printf("3- Harmonica\n");
        printf("4- Aritmetica\n");
        scanf("%d", &op);
        if(op<1 || op>4){
            printf("Valor invalido, tente novamente\n\n");
        }
    } while(op<1 || op>4);

    printf("Escolha os tres numeros para essa media:\n");
    scanf("%f %f %f", &x, &y, &z);
    printf("A media eh ");
    switch(op){
        case 1:
            printf("%.2f", cbrt(x*y*z));
            break;
        case 2:
            printf("%.2f", fabs(x+2*y+3*z)/3);
            break;
        case 3:
            printf("%.2f", 1/(1/x+1/y+1/z));
            break;
        case 4:
            printf("%.2f", (x+y+z)/3);
    }
    return 0;
}