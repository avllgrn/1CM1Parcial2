#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float a, b, c, x1, x2, disc;

    printf("Ingresa a ");
    scanf("%f",&a);
    printf("Ingresa b ");
    scanf("%f",&b);
    printf("Ingresa c ");
    scanf("%f",&c);

    disc = pow(b,2)-4*a*c;

    if(a == 0){
        printf("Error! Indeterminacion...\n\n");
    }
    else{
        if(disc < 0){
            printf("Error! Raices imaginarias...\n\n");
        }
        else{
            x1 = (-b+sqrt(disc))/(2*a);
            x2 = (-b-sqrt(disc))/(2*a);
            printf("x1 = %f\n",x1);
            printf("x2 = %f\n",x2);
        }
    }

    return 0;
}

int esMultiploDe(int x, int y){
    return x%y == 0;
}
