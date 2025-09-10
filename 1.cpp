#include <stdio.h>

int main(){
    float a, r, volume; 

    printf("Digite a altura do cilindro\n");
    scanf("%f", &a);

    printf("Digite o raio do cilindro\n");
    scanf("%f", &r);

    volume = (3.14)*(r*r)*(a);

    printf("O volume do cilindro é %.2f\n", volume);
    return 0;
}

/*
rodar o codigo:
g++ 1.cpp 
./a.out
*/