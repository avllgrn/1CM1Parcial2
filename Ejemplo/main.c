#include <stdio.h>
#include <stdlib.h>

int esPar(int x);

int main(void){
    int x;

    printf("Ingresa un numero ");
    scanf("%d",&x);

    if(esPar(x)){
        printf("ES par\n\n");
    }
    else{
        printf("NO es par\n\n");
    }

    return 0;
}

int esPar(int x){
    return x%2 == 0;
}
