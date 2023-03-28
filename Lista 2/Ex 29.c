#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, a, b, r, x, acertos=0, a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, r1, r2, r3, r4 ,r5;
    for(i=0; i<5; i++){
        a=1 + rand()%100; //rand()%100 gera valores entre 0 e 99, corrige com o +1
        b=1 + rand()%100;
        r=a+b;
        printf("Quanto eh %d + %d? ", a, b);
        scanf("%d", &x);
        if(r==x){
            acertos++;
        }
        switch(i){
            case 0:
                a1=a;
                b1=b;
                r1=r;
                break;
            case 1:
                a2=a;
                b2=b;
                r2=r;
                break;
            case 2:
                a3=a;
                b3=b;
                r3=r;
                break;
            case 3:
                a4=a;
                b4=b;
                r4=r;
                break;
            case 4:
                a5=a;
                b5=b;
                r5=r;
                break;
        }
    }
    printf("Voce acertou %d questoes\n", acertos);
    printf("As questoes e as suas respectivas respostas eram:\n");
    printf("%d + %d = %d\n", a1, b1, r1);
    printf("%d + %d = %d\n", a2, b2, r2);
    printf("%d + %d = %d\n", a3, b3, r3);
    printf("%d + %d = %d\n", a4, b4, r4);
    printf("%d + %d = %d\n", a5, b5, r5);

    return 0;
}