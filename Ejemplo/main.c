#include <stdio.h>
#include <stdlib.h>

int esNegativo(int x);

int main(void){
    int x,y;

    printf("Ingresa un numero ");
    scanf("%d",&x);

    if(esNegativo(x)){
        printf("ES negativo\n\n");
    }
    else{
        printf("NO es negativo\n\n");
    }

    return 0;
}

int esNegativo(int x){
    return x<0;
}
