#include <stdio.h>
#include <stdlib.h>

int esMultiploDe(int x, int y);

int main(void){
    int x,y;

    printf("Ingresa un numero ");
    scanf("%d",&x);
    printf("Ingresa otro numero ");
    scanf("%d",&y);

    if(esMultiploDe(x,y)){
        printf("%d ES multiplo de %d\n\n",x,y);
    }
    else{
        printf("%d NO es multiplo de %d\n\n",x,y);
    }

    return 0;
}

int esMultiploDe(int x, int y){
    return x%y == 0;
}
