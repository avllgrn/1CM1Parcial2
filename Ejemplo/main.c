#include <stdio.h>
#include <stdlib.h>

int esPar(int x);

int main(void){
    int x;

    printf("Ingresa un numero ");
    scanf("%d",&x);

    printf("La funcion retorna: %d",esPar(x));

    return 0;
}

int esPar(int x){
    return x%2 == 0;
}
