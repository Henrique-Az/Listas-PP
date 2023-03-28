#include<stdio.h>

int main(){
    float x, y, z, n1, n2, n3;
    printf("Digite os tres numeros desejados:\n");
    scanf("%f %f %f", &x, &y, &z);
    n1 = (x>y)?x:y; //Coloca em n1 o maior dos dois números, x ou y
    n2 = (x>y)?y:x; //Coloca em n2 o menor dos dois números, x ou y
    n3 = (z>n2)?n2:z; //Coloca em n3 o menor dos dois números, z ou n2
    n2 = (z>n2)?z:n2; //Coloca em n2 o maior dos dois números, z ou n2. Precisa ser nessa ordem, ou o valor de n2 é trocado antes de ser comparado
    n2= (n1>z)?n2:n1; //Checa se n1 realmente é o maior os três, se não, bota ele no meio, já sabemos que pelo menos ele é maior que n3
    n1 = (n1>z)?n1:z; //Faz a mesma checagem, bota z em n1 se z for maior, se não, nada muda na ordem
    printf("Os numeros, em ordem, sao: %.3f, %.3f e %.3f", n3, n2, n1);
}