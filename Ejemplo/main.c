#include <stdio.h>
int main(void){

    char genero;

    printf("Ingresa tu genero ");
    scanf("%c",&genero);

    if(genero=='f' ||genero=='F'){
        printf("Femenino");
    }
    else if(genero=='m' ||genero=='M'){
        printf("Masculino");
    }
    else{
        printf("Genero no reconocido");
    }

    return 0;
}
