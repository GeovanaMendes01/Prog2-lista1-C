#include <stdio.h>

int main(){
    int velocidade, i;
    double multa = 0;

    printf("Digite a velocidade do seu carro\n");
    scanf("%d", &velocidade);

    if(velocidade>80){
        multa = (velocidade - 80)*5;
        printf("Voce foi multado!\n");
        printf("Valor da multa é R$ %.2f\n", multa);
    }else{
        printf("Voce não foi multado");
    };

    return 0;
}