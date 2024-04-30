#include <stdio.h>
int main(void){

    printf("Operador && AND\n\n");

    printf("%d && %d => %d\n",0,0,0&&0);
    printf("%d && %d => %d\n",0,1,0&&1);
    printf("%d && %d => %d\n",1,0,1&&0);
    printf("%d && %d => %d\n",1,1,1&&1);

    printf("\n\n");

    printf("Operador && OR\n\n");

    printf("%d || %d => %d\n",0,0,0||0);
    printf("%d || %d => %d\n",0,1,0||1);
    printf("%d || %d => %d\n",1,0,1||0);
    printf("%d || %d => %d\n",1,1,1||1);

    printf("\n\n");

    printf("Operador ! NOT\n\n");

    printf("!%d => %d\n",0,!0);
    printf("!%d => %d\n",1,!1);
    printf("\n\n");

    return 0;
}
