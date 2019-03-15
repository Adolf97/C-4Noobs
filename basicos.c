#include <stdio.h>

int main()
{
	float num1, num2, resultado;
	int operacion;
	printf("Escriba dos números");
	scanf("%f %f", &num1, &num2);
	printf("Escriba el número de la operación que desee hacer.\n Para
		sumar 1\n Para restar 2\n Para multiplicar 3\n y Para dividir
		4");
	scanf("%d", &operacion);
	if(operacion == 1) {
		resultado = num1+num2;
	}
	if(operacion == 2) {
		resultado = num1-num2;
	}
	if(operacion == 3) {
		resultado = num1*num2;
	}else {
		resultado = num1/num2;
	}
	
	printf("El resultado es: %.2f", resultado);
}
