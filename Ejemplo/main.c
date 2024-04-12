#include <stdio.h>
#include <stdlib.h>

int esMultiploDe(int x, int y);

int main(void){
    int x,y;

    printf("Ingresa un numero ");
    scanf("%d",&x);
    printf("Ingresa otro numero ");
    scanf("%d",&y);

    printf("La funcion retorna: %d",esMultiploDe(x,y));

    return 0;
}

int esMultiploDe(int x, int y){
    return x%y == 0;
}
