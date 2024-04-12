#include <stdio.h>
#include <stdlib.h>

int esNegativo(int x);

int main(void){
    int x,y;

    printf("Ingresa un numero ");
    scanf("%d",&x);

    printf("La funcion retorna: %d",esNegativo(x));

    return 0;
}

int esNegativo(int x){
    return x<0;
}
