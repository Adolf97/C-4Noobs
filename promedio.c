//Este programa calcula el promedio a partir de un numero
//determinado de califaciones dadas.

#include <stdio.h>

int main() {
	int n;
	float cal, prom = 0;
		    
	 scanf("%d", &n);
		        
	for(int i = 0; i < n; i++) {
		 scanf("%f", &cal);
		 prom += cal;
	}
	prom/=n;
    	printf("%.2f", prom);
}
