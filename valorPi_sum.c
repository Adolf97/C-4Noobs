//Segundo programa: Determina el valor aproximado de PI a partir de
//una sumatoria desde i (es decir = 1) hasta k (en este caso = 10000),
//* 6/(i(elevado al cuadrado)).

#include <stdio.h>
#include <math.h>

int main(){
	int k = 10000;
	float suma = 0;
		    
	for (int i = 1; i < k; i++) {
		suma += 6/(pow(i, 2));
	}
	float raiz = sqrt(suma);
	printf("%f", raiz);
}
