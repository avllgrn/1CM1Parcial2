#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x;

    printf("Ingresa un numero ");
    scanf("%d",&x);

    if(x%2 == 0){
        printf("%d es par.\n\n",x);
    }
    else{
        printf("%d no es par.\n\n",x);
    }

    return 0;
}









