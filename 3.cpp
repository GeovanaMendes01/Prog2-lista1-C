//3. Escreva um programa que leia três números e que imprima o maior e o menor.

#include <stdio.h>

int main(){
    double num1, num2, num3;
    double maior = num1;
    double menor = num1;

    printf("Digite três números: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if(num1>num2 && num1>num3){
        maior = num1;
    }else if (num2>num1 && num2>num3){
        maior = num2;
    }else if (num3>num1 && num3>num2){
        maior = num3;
    }

    if(num1<num2 && num1<num3){
        menor = num1;
    }else if (num2<num1 && num2<num3){
        menor = num2;
    }else if (num3<num1 && num3<num2){
        menor = num3;
    }

    printf("O maior numero é %.2f e o menor numero é %.2f", maior, menor);
    return 0;
}