#include <stdio.h>

int main(){
    int dividendo, divisor;
    int quociente = 0;
    int resto;

    printf("Digite dois números: ");
    scanf("%d %d", &dividendo, &divisor);

    if (divisor == 0){
        printf("Erro: divisão por zero!\n");
        return 1;
    }

    resto = dividendo;

    while(resto >= divisor){
        resto = resto-divisor;
        quociente++;
    }
    
    printf("Quociente = %d, Resto = %d\n", quociente, resto);

    return 0;

}
