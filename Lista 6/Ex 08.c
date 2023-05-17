#include<stdio.h>
#include<string.h>

int val_dia(int d, int m, int a);

struct data{
    int dia, mes, ano;
};

struct func{
    char nome[30], cargo[30], cpf[16], s;
    int age, setor, salario;
    struct data data;
};



int main(){
    struct func f;
    printf("Insira o nome do funcionario: ");
    fflush(stdin);
    fgets(f.nome, 30, stdin);
    f.nome[strlen(f.nome)-1]='\0';
    printf("Insira a idade do funcionario: ");
    scanf("%d", &f.age);
    do{
        printf("Insira o sexo do funcionario(M/F): ");
        fflush(stdin);
        scanf("%c", &f.s);
        if(f.s!='M'&&f.s!='m'&&f.s!='F'&&f.s!='f'){
            printf("Nao foi inserido um caractere valido, tente novamente:\n\n");
        }
    }while(f.s!='M'&&f.s!='m'&&f.s!='F'&&f.s!='f');
    printf("Insira o CPF do funcionario: ");
    fflush(stdin);
    fgets(f.cpf, 16, stdin);
    f.cpf[strlen(f.cpf)-1]='\0';
    do{
        printf("Insira o dia, mes e ano do seu nascimento: ");
        fflush(stdin);
        scanf("%d %d %d", &f.data.dia, &f.data.mes, &f.data.ano);
        if(val_dia(f.data.dia, f.data.mes, f.data.ano)){
            printf("Data invalida, tente novamente:\n\n");
        }
    }while(val_dia(f.data.dia, f.data.mes, f.data.ano));
    do{
        printf("Insira o codigo do setor onde o funcionario trabalha: ");
        scanf("%d", &f.setor);
        if(f.setor<0||f.setor>99){
            printf("Setor invalido, tente novamente:\n\n");
        }
    }while(f.setor<0||f.setor>99);
    printf("Insira o cargo do funcionario: ");
    fflush(stdin);
    fgets(f.cargo, 30, stdin);
    f.cargo[strlen(f.cargo)-1]='\0';
    printf("Insira o salario do funcionario: ");
    scanf("%d", &f.salario);

    printf("%s, %d anos, Sexo: %c, CPF: %s, Nascimento: %d/%d/%d", f.nome, f.age, f.s, f.cpf, f.data.dia, f.data.mes, f.data.ano);
    printf("\nSetor %d, Cargo: %s, Salario: %d", f.setor, f.cargo, f.salario);
    return 0;
}

int val_dia(int d, int m, int a){
    if(m<1||m>12){
        return 1;
    } else{
        switch(m){
            case 1:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 2:
                if((a%400==0) || ((a%4==0) && (a%100!=0))){//checa se o ano é bissexto
                    if(d<1||d>29){
                        return 1;
                    }else return 0;
                } else{
                    if(d<1||d>28){
                        return 1;
                    }else return 0;
                }
            case 3:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 4:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 5:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 6:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 7:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 8:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 9:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 10:
                if(d<1||d>31){
                    return 1;
                } else return 0;
            case 11:
                if(d<1||d>30){
                    return 1;
                } else return 0;
            case 12:
                if(d<1||d>31){
                    return 1;
                } else return 0;
        }
    }
}
