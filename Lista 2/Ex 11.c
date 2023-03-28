#include<stdio.h>

int main(){
    int x,y,a,sum=0;
    printf("Insira o seu numero: ");
    scanf("%d", &x);
    y=x;
    if(x<=0){ //não sei incluir o caso de overflow como outra condição que invalida o input, por chance, alguns falham a condição
        printf("Numero invalido");}
    else if(x/10>0) //Maxímo de dígitos que int aceita é 10, então são neccessários 10 if's
    {
        a=x%10;
        x=x/10;
        sum=sum+a;
        if(x/10>0)
        {
            a=x%10;
            x=x/10;
            sum=sum+a;
            if(x>0)
            {
                a=x%10;
                x=x/10;
                sum=sum+a;
                if(x>0)
                {
                    a=x%10;
                    x=x/10;
                    sum=sum+a;
                    if(x>0)
                    {
                        a=x%10;
                        x=x/10;
                        sum=sum+a;
                        if(x>0)
                        {
                            a=x%10;
                            x=x/10;
                            sum=sum+a;
                            if(x>0)
                            {
                                a=x%10;
                                x=x/10;
                                sum=sum+a;
                                if(x>0)
                                {
                                    a=x%10;
                                    x=x/10;
                                    sum=sum+a;
                                    if(x>0)
                                    {
                                        a=x%10;
                                        x=x/10;
                                        sum=sum+a;
                                        if(x>0)
                                        {
                                            a=x%10;
                                            x=x/10;
                                            sum=sum+a;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("A soma dos digitos de %d eh %d", y, sum);
    }
    return 0;
}