#include <stdio.h>

int main(){
    int i;

    printf("Lançamento em: ");

    for(i=10; i>=0; i--){
        if(i>0){
            printf("%d, ", i);
        }else{
            printf("%d e Fogo!\n", i);
        }
    };
    return 0;

}
