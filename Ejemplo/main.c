#include <stdio.h>
int main(void){
    char genero,estadoCivil;
    printf("Dame tu genero y estado civil ");
    scanf("%c%c",&genero,&estadoCivil);

    if(genero == 'f'){
        if(estadoCivil == 's'){
            printf("soltera\n");
        }
        else if(estadoCivil == 'S'){
            printf("Soltera\n");
        }
        else if(estadoCivil == 'c'){
            printf("casada\n");
        }
        else if(estadoCivil == 'C'){
            printf("Casada\n");
        }
        else if(estadoCivil == 'd'){
            printf("divorciada\n");
        }
        else if(estadoCivil == 'D'){
            printf("Divorciada\n");
        }
        else if(estadoCivil == 'v'){
            printf("viuda\n");
        }
        else if(estadoCivil == 'V'){
            printf("Viuda\n");
        }
        else{
            printf("femenino, estado civil no reconocido\n");
        }
    }
    else if(genero == 'F'){
        if(estadoCivil == 's'){
            printf("solterA\n");
        }
        else if(estadoCivil == 'S'){
            printf("SolterA\n");
        }
        else if(estadoCivil == 'c'){
            printf("casadA\n");
        }
        else if(estadoCivil == 'C'){
            printf("CasadA\n");
        }
        else if(estadoCivil == 'd'){
            printf("divorciadA\n");
        }
        else if(estadoCivil == 'D'){
            printf("DivorciadA\n");
        }
        else if(estadoCivil == 'v'){
            printf("viudA\n");
        }
        else if(estadoCivil == 'V'){
            printf("ViudA\n");
        }
        else{
            printf("Femenino, estado civil no reconocido\n");
        }
    }
    else if(genero == 'm'){
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
            printf("masculino, estado civil no reconocido\n");
        }
    }
    else if(genero == 'M'){
        if(estadoCivil == 's'){
            printf("solterO\n");
        }
        else if(estadoCivil == 'S'){
            printf("SolterO\n");
        }
        else if(estadoCivil == 'c'){
            printf("casadO\n");
        }
        else if(estadoCivil == 'C'){
            printf("CasadO\n");
        }
        else if(estadoCivil == 'd'){
            printf("divorciadO\n");
        }
        else if(estadoCivil == 'D'){
            printf("DivorciadO\n");
        }
        else if(estadoCivil == 'v'){
            printf("viudO\n");
        }
        else if(estadoCivil == 'V'){
            printf("ViudO\n");
        }
        else{
            printf("Masculino, estado civil no reconocido\n");
        }
    }
    else{
        if(estadoCivil == 's'){
            printf("Genero no reconocido, soltero\n");
        }
        else if(estadoCivil == 'S'){
            printf("Genero no reconocido, Soltero\n");
        }
        else if(estadoCivil == 'c'){
            printf("Genero no reconocido, casado\n");
        }
        else if(estadoCivil == 'C'){
            printf("Genero no reconocido, Casado\n");
        }
        else if(estadoCivil == 'd'){
            printf("Genero no reconocido, divorciado\n");
        }
        else if(estadoCivil == 'D'){
            printf("Genero no reconocido, Divorciado\n");
        }
        else if(estadoCivil == 'v'){
            printf("Genero no reconocido, viudo\n");
        }
        else if(estadoCivil == 'V'){
            printf("Genero no reconocido, Viudo\n");
        }
        else{
            printf("Genero no reconocido, estado civil no reconocido\n");
        }
    }

    return 0;
}
