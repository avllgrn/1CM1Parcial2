#include <stdio.h>
int main(void){

    char caracter;

    printf("Ingresa un caracter ");
    scanf("%c",&caracter);

    if(65<=caracter && caracter<=90){
        printf("%c ES Mayuscula",caracter);
    }
    else{
        printf("%c NO es Mayuscula",caracter);
    }

    return 0;
}
