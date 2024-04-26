#include <stdio.h>
int main(void){
    char genero;
    printf("Dame tu edad ");
    scanf("%c",&genero);

    switch(genero){
        case 'f':
            printf("femenino\n");
            break;
        case 'F':
            printf("Femenino\n");
            break;
        case 'm':
            printf("masculino\n");
            break;
        case 'M':
            printf("Masculino\n");
            break;
        default:
            printf("Genero no reconocido\n");
            break;
    }

    return 0;
}
