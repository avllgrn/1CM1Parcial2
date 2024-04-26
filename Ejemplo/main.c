#include <stdio.h>
int main(void){
    char genero;
    printf("Dame tu edad ");
    scanf("%c",&genero);

    if(genero == 'f'){
        printf("femenino\n");
    }
    else if(genero == 'F'){
        printf("Femenino\n");
    }
    else if(genero == 'm'){
        printf("masculino\n");
    }
    else if(genero == 'M'){
        printf("Masculino\n");
    }
    else{
        printf("Genero no reconocido\n");
    }

    return 0;
}
