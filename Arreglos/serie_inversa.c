/*
Hecho por: Rafael Alejandro Beltrán Santos
Ejercicio 2. Programa que pida al usuario 5 números reales y luego los muestre en el orden contrario al que se introdujeron.
*/

#include <stdio.h>
int main(){
	float nums[5] = {};

	for(int i=0; i<5; i++){
		printf("Ingrese el %d° valor: ", i+1);
		scanf("%f", &nums[i]);
	}
	
	for(int i=5-1; i>=0; i--){
		printf("%.2f\n", nums[i]);
	}
}
