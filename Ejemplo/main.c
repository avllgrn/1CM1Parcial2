#include <stdio.h>

void funcion1(void);
int menorEntre(int a, int b);
void funcion2(void);

int main(void){
    int opcion;
    printf("1. Menor entre 2\n");
    printf("2. Menor entre 3\n");
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
    int x, y, valor;
    printf("Ingresa x ");scanf("%d",&x);
    printf("Ingresa y ");scanf("%d",&y);
    valor = menorEntre(x,y);

    if(valor == -1){
        printf("%d es menor que %d\n",x,y);
    }
    else{
        if(valor == 1){
            printf("%d es menor que %d\n",y,x);
        }
        else{
            printf("%d es identico a %d\n",x,y);
        }
    }
}
int menorEntre(int a, int b){
    if(a<b){
        return -1;
    }
    else{
        if(b<a){
            return 1;
        }
        else{
            return 0;
        }
    }
}

void funcion2(void){
    int a,b,c;
    printf("Ingresa a ");scanf("%d",&a);
    printf("Ingresa b ");scanf("%d",&b);
    printf("Ingresa c ");scanf("%d",&c);

    if(a<b && a<c){
        printf("El menor entre %d %d %d es %d\n",a,b,c,a);
    }
    else if(b<a && b<c){
        printf("El menor entre %d %d %d es %d\n",a,b,c,b);
    }
    else if(c<a && c<b){
        printf("El menor entre %d %d %d es %d\n",a,b,c,c);
    }
    else if(a==b && a<c){
        printf("El menor entre %d %d %d es %d\n",a,b,c,a);
    }
    else if(a==b && c<a){
        printf("El menor entre %d %d %d es %d\n",a,b,c,c);
    }
    else if(a==c && a<b){
        printf("El menor entre %d %d %d es %d\n",a,b,c,a);
    }
    else if(a==c && b<a){
        printf("El menor entre %d %d %d es %d\n",a,b,c,b);
    }
    else if(b==c && b<a){
        printf("El menor entre %d %d %d es %d\n",a,b,c,b);
    }
    else if(b==c && a<b){
        printf("El menor entre %d %d %d es %d\n",a,b,c,a);
    }
    else{
        printf("El menor entre %d %d %d es %d\n",a,b,c,a);
    }
}
