#include <stdio.h>

int main(void)
{
    int varibale;
    int *puntero;
    puntero=&varibale;
    printf("Hola mundito\n");
    printf("contenido del puntero %d\n",*puntero);
    printf("direccion de memoria almacenda en el puntero %p\n", puntero);
    printf("direccion de memoria de la variable %p\n", &varibale);
    printf("direccion de memoria del puntero %p\n",&puntero);
    printf("tamanio de la memoria usado por la variable %d en byte \n",sizeof(varibale));
    return 0;
}