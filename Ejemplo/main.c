#include <stdio.h>
int main(void){
    char genero,estadoCivil;
    printf("Dame tu genero y estado civil ");
    scanf("%c%c",&genero,&estadoCivil);

    switch(genero){
        case 'f':
            switch(estadoCivil){
                case 's':
                    printf("soltera\n");
                    break;
                case 'S':
                    printf("Soltera\n");
                    break;
                case 'c':
                    printf("casada\n");
                    break;
                case 'C':
                    printf("Casada\n");
                    break;
                case 'd':
                    printf("divorciada\n");
                    break;
                case 'D':
                    printf("Divorciada\n");
                    break;
                case 'v':
                    printf("viuda\n");
                    break;
                case 'V':
                    printf("Viuda\n");
                    break;
                default:
                    printf("femenino, estado civil no reconocido\n");
                    break;
            }
            break;
        case 'F':
            switch(estadoCivil){
                case 's':
                    printf("solterA\n");
                    break;
                case 'S':
                    printf("SolterA\n");
                    break;
                case 'c':
                    printf("casadA\n");
                    break;
                case 'C':
                    printf("CasadA\n");
                    break;
                case 'd':
                    printf("divorciadA\n");
                    break;
                case 'D':
                    printf("DivorciadA\n");
                    break;
                case 'v':
                    printf("viudA\n");
                    break;
                case 'V':
                    printf("ViudA\n");
                    break;
                default:
                    printf("Femenino, estado civil no reconocido\n");
                    break;
            }
            break;
        case 'm':
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
                    printf("masculino, estado civil no reconocido\n");
                    break;
            }
            break;
        case 'M':
            switch(estadoCivil){
                case 's':
                    printf("solterO\n");
                    break;
                case 'S':
                    printf("SolterO\n");
                    break;
                case 'c':
                    printf("casadO\n");
                    break;
                case 'C':
                    printf("CasadO\n");
                    break;
                case 'd':
                    printf("divorciadO\n");
                    break;
                case 'D':
                    printf("DivorciadO\n");
                    break;
                case 'v':
                    printf("viudO\n");
                    break;
                case 'V':
                    printf("ViudO\n");
                    break;
                default:
                    printf("Masculino, estado civil no reconocido\n");
                    break;
            }
            break;
        default:
            switch(estadoCivil){
                case 's':
                    printf("Genero no reconocido, soltero\n");
                    break;
                case 'S':
                    printf("Genero no reconocido, Soltero\n");
                    break;
                case 'c':
                    printf("Genero no reconocido, casado\n");
                    break;
                case 'C':
                    printf("Genero no reconocido, Casado\n");
                    break;
                case 'd':
                    printf("Genero no reconocido, divorciado\n");
                    break;
                case 'D':
                    printf("Genero no reconocido, Divorciado\n");
                    break;
                case 'v':
                    printf("Genero no reconocido, viudo\n");
                    break;
                case 'V':
                    printf("Genero no reconocido, Viudo\n");
                    break;
                default:
                    printf("Genero no reconocido, estado civil no reconocido\n");
                    break;
            }
            break;
    }

    return 0;
}
