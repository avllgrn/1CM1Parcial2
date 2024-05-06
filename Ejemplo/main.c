#include <stdio.h>
#include <math.h>

void funcion1(void);
float areaRectangulo(float b, float a);
void funcion2(void);

int main(void){
    int opcion;
    printf("1. Area rectangulo\n");
    printf("2. Formula general\n");
    printf("3. Salir\n");
    printf("Cual es tu opcion? ");
    scanf("%d",&opcion);

    switch(opcion){
        case 1:
            funcion1();
            break;
        case 2:
            funcion2();
            break;
        case 3:
            printf("Adios!");
            break;
        default:
            printf("Opcion invalida");
            break;
    }

    return 0;
}

void funcion1(void){
    float base, altura, area;
    printf("Ingresa base ");scanf("%f",&base);
    printf("Ingresa altura ");scanf("%f",&altura);
    if(base>0){
        if(altura>0){
            area = areaRectangulo(base,altura);
            printf("Base  : %f\n",base);
            printf("Altura: %f\n",altura);
            printf("Area  : %f\n",area);
        }
    }
}
float areaRectangulo(float b, float a){
    if(a<=0){
        return 0;
    }
    else{
        if (b<=0){
            return 0;
        }
        else{
            return b*a;
        }
    }
}

void funcion2(void){
    float a,b,c,disc,x1,x2;
    printf("Ingresa a ");scanf("%f",&a);
    printf("Ingresa b ");scanf("%f",&b);
    printf("Ingresa c ");scanf("%f",&c);
    disc = pow(b,2)-4*a*c;

    if(a==0 || disc<0){
        printf("Error! Las raices no pueden calcularse...\n");
    }
    else{
        x1 = (-b+sqrt(disc))/(2*a);
        x2 = (-b-sqrt(disc))/(2*a);
        printf("x1 = %f\n",x1);
        printf("x2 = %f\n",x2);
    }
}
