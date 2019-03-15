#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, resultado, resultado2;
    int operacion;
    scanf("%f %f", &num1, &num2);
    scanf("%d", &operacion);
    
    if(operacion == 1) 
    {
        resultado = num1+num2;
        printf("El resultado es: %.2f", resultado);
    }
    if(operacion == 2)
    {
        resultado = num1-num2;
        printf("El resultado es: %.2f", resultado);
    }
    if(operacion == 3)
    {
        resultado = num1*num2;
        printf("El resultado es: %.2f", resultado);
    }
    if(operacion == 4)
    {
        resultado = num1/num2;
        printf("El resultado es: %.2f", resultado);
    }
    if(operacion == 5)
    {
        resultado = pow(num1, num2);
        printf("El resultado es: %.2f", resultado);
    }
    if(operacion == 6)
    {
        resultado = sqrt(num1);
        resultado2 = sqrt(num2);
        printf("El resultado de la primer raíz es: %.2f.\nEl resultado de la segunda raíz es: %.2f", resultado, resultado2);
    }
    if(operacion > 6)
    {
        printf("no es una operación válida");
    }
}
