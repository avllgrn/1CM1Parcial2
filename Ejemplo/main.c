#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x,y;

    printf("Ingresa un numero ");
    scanf("%d",&x);
    printf("Ingresa otro numero ");
    scanf("%d",&y);

    if(x%y == 0){
        printf("%d es multiplo de %d.\n\n",x,y);
    }
    else{
        printf("%d no es multiplo de %d.\n\n",x,y);
    }

    return 0;
}









