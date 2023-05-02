#include<stdio.h>
#include<string.h>
#include<windows.h>

int main(){
    double elapsedtime;
    LARGE_INTEGER frequency;
    LARGE_INTEGER inicio,fim;


    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&inicio);
    char numb[989]="7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530";
    int i, maior, maior_pos=0, aux;
    maior=(numb[0]-48)*(numb[1]-48)*(numb[2]-48)*(numb[3]-48)*(numb[4]-48);
    for(i=1; i<983; i++){ //string tem tamanho de 988, último dígito endereçado em 987, (983, 984, 985, 986, 987) é o último produto que deve ser feito
        aux=(numb[i]-48)*(numb[i+1]-48)*(numb[i+2]-48)*(numb[i+3]-48)*(numb[i+4]-48); //poderia ser generalizado com for, caso fossem muito mais que 5 produtos
        if(aux>maior){
            maior=aux;
            maior_pos=i;
        } else if(numb[i+4]==0){  /*Optimização um pouco limitada, para strings
        com muitos 0, poderiamos expandir para, quando aux for 0, procura 0 em 
        mais posições além da 5, mas, nesse caso, como não há tantos 0's assim, 
        o trabalho computacional de muitos if's não compensa o trabalho de fazer 
        o produto dos 5 próximos dígitos, mesmo que já esteja garantido que esse 
        resultado é 0. Note também que essa optimização na verdade desaceleraria 
        o programa se existissem poucos 0's na string. Foi observado poucos 
        ganhos computacionais com essa string em específico*/
            i+=4;
        }
    }
    printf("O maior produto eh %d, localizado em %d\n", maior, maior_pos);
    printf("%c%c%c%c%c eh a string resultado",numb[maior_pos],numb[maior_pos+1],numb[maior_pos+2],numb[maior_pos+3],numb[maior_pos+4]);
    QueryPerformanceCounter(&fim);
    elapsedtime = (fim.QuadPart - inicio.QuadPart) * 1000.0 / frequency.QuadPart;

    printf(" Elapsed Time: %lf ms\n", elapsedtime);
    return 0;
}