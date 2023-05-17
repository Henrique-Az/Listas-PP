#include<stdio.h>
#include<string.h>

struct carro{
    char marca[15];
    int a, p;
};

int main(){
    struct carro c[5];
    int p=1, i;
    for(i=0; i<5; i++){
        printf("Insira a marca do carro %d: ", i+1);
        setbuf(stdin, NULL);
        fgets(c[i].marca, 15, stdin);
        printf("Insira o ano desse carro: ");
        scanf("%d", &c[i].a);
        printf("Insira o preco desse carro: ");
        scanf("%d", &c[i].p);
    }
    while(p){
        printf("\n\nInsira qual o valor maximo desejado pro carro(Insira 0 para sair): ");
        scanf("%d", &p);
        if(p!=0){
            if(p<c[0].p&&p<c[1].p&&p<c[2].p&&p<c[3].p&&p<c[4].p){
                printf("Nao ha nenhum carro que atende esse valor\n\n");
            }else{
                printf("Os carros que atendem esse preco sao:\n");
                for(i=0; i<5; i++){
                    if(p>c[i].p){
                        printf("%s", c[i].marca);
                    }
                }
            }
        }
    }
}