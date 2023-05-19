#include<stdio.h>

int main(){
    int a, b, c, *pa=&a, *pb=&b, *pc=&c;

    printf("Insira tres numeros: ");
    scanf("%d%d%d", pa, pb, pc);

    if(*pa<*pb){ //coloca a e b em ordem
        pa=&b;
        pb=&a;
    }
    if(*pb<*pc){ //coloca b e c em ordem
        pc=pb;
        pb=&c;
    }
    if(*pa<*pb){ //Vê se o c que, possivelmente está em pb, não é o maior da lista
        pb=pa;
        pa=&c;
    }

    printf("Os numeros, em ordem crescente, sao: %d %d %d", *pc, *pb, *pa);
    printf("\n\nOs enderecos desses numeros sao %p %p %p", pc, pb, pa);
    return 0;
}