#include <stdio.h>
int main(void){

    int edad;

    printf("Ingresa tu edad ");
    scanf("%d",&edad);

    if(edad < 0){
        printf("Error! Edad negativa.");
    }
    else if(0<=edad && edad<18){
        printf("Eres menor de edad.");
    }
    else if(18<=edad && edad<120){
        printf("Eres mayor de edad.");
    }
    else{
        printf("Error! Edad positiva.");
    }

    return 0;
}
