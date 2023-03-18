# include <stdio.h>

float CuadradoNumero(float numero);
void CuadradoNumeros(float numero);
void invertir (int a, int b);
void orden (int a, int b);

//<<<<<<<<<<<<<<<<<<<AQUI MAIN>>>>>>>>>>>>>>>>>>>

int main (void)
{
    int num1=44, num2=13;
    invertir(num1,num2);
    orden (num1,num2);
    CuadradoNumeros(num2);
    return 0;
}

//<<<<<<<<<<<<<< FIN MAIN>>>>>>>>>>>>>>>>

float CuadradoNumero(float numero)
{
    return (numero*numero);
}

void CuadradoNumeros(float numero)
{
    printf("CUADRADO DE UN NUMERO\n");
    printf("cuadrado de %.2f es %.2f\n",numero, (numero*numero));

}
void invertir (int a, int b)
{
    printf("NUMEROS INVERTIDOS\n");
    int auxb=b;
    b=a;
    a=auxb;
    printf("valor de a = %d\n",a);
    printf("valor de b = %d\n",b);

}
void orden (int a, int b)
{
    printf("NUMEROS ORDENADOS\n");
    int aux_a=a, aux_b=b;
    if (aux_a>aux_b)
    {
        b=aux_a;
        a=aux_b;
        printf("valor de b %d\n",b);
        printf("valor de a %d\n",a);
    } else {
        a=aux_b;
        b=aux_a;
        printf("valor de a %d\n",a);
        printf("valor de b %d\n",b);
    }

}