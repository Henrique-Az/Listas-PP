#include<stdio.h>
#include<math.h>
#define pi 3.1415

struct ponto_p{
    float r, a;
};

struct ponto_c{
    float x, y;   
};


int main(){
    struct ponto_p p1;
    struct ponto_c p2;

    printf("Insira o raio e o angulo do ponto:\n");
    scanf("%f %f", &p1.r, &p1.a);

    p2.x=p1.r*cos(p1.a);
    p2.y=p1.r*sin(p1.a);

    printf("As coordenadas do ponto sao (%.2f, %.2f)", p2.x, p2.y);
    return 0;

}