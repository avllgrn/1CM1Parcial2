#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float r,d,a,p;

    printf("Ingresa radio ");
    scanf("%f",&r);


    if(r < 0){
        printf("Error! radio invalido...\n\n");
    }
    else{
        d = 2 * r;
        a = M_PI * pow(r,2);
        p = 2 * M_PI * r;
        printf("Radio = %f\n",r);
        printf("Diametro = %f\n",d);
        printf("Area = %f\n",a);
        printf("Perimetro = %f\n",p);
    }

    return 0;
}
