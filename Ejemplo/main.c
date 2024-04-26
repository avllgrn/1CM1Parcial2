#include <stdio.h>
int main(void){
    char estadoCivil;
    printf("Dame tu estado civil ");
    scanf("%c",&estadoCivil);

    switch(estadoCivil){
        case 's':
            printf("soltero\n");
            break;
        case 'S':
            printf("Soltero\n");
            break;
        case 'c':
            printf("casado\n");
            break;
        case 'C':
            printf("Casado\n");
            break;
        case 'd':
            printf("divorciado\n");
            break;
        case 'D':
            printf("Divorciado\n");
            break;
        case 'v':
            printf("viudo\n");
            break;
        case 'V':
            printf("Viudo\n");
            break;
        default:
            printf("Estado civil no reconocido\n");
            break;
    }


    return 0;
}
