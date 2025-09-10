#include <stdio.h>

int main(){
    int num = -1;
    int cont = 0;
    int soma = 0;
    double media = 0;

    while(num!=0){
        scanf("%d", &num);
        if(num!=0){
            cont++;
            soma += num;
        }
    }
    media = (double) soma/cont;

    printf("Foram digitados %d números\n", cont);
    printf("Total da soma = %d\n", soma);
    printf("Média = %.2lf\n", media);
}

 