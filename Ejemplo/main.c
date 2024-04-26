#include <stdio.h>
int main(void){
    char estadoCivil;
    printf("Dame tu estado civil ");
    scanf("%c",&estadoCivil);

    if(estadoCivil == 's'){
        printf("soltero\n");
    }
    else if(estadoCivil == 'S'){
        printf("Soltero\n");
    }
    else if(estadoCivil == 'c'){
        printf("casado\n");
    }
    else if(estadoCivil == 'C'){
        printf("Casado\n");
    }
    else if(estadoCivil == 'd'){
        printf("divorciado\n");
    }
    else if(estadoCivil == 'D'){
        printf("Divorciado\n");
    }
    else if(estadoCivil == 'v'){
        printf("viudo\n");
    }
    else if(estadoCivil == 'V'){
        printf("Viudo\n");
    }
    else{
        printf("Estado civil no reconocido\n");
    }

    return 0;
}
