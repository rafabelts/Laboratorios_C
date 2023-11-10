/*
Hecho por: Rafael Alejandro Beltrán Santos
Ejercicio 1. Programa que pida al usuario 4 números, los memorice, calcule su media aritmética y después muestre en pantalla la media y los datos tecleados.
*/

#include <stdio.h>
int main(){
	int total_suma_datos;
       	float media_aritmetica; 
	int nums[4] = {};

	for(int i=0; i<4; i++){
		printf("Ingrese el %d° número: ", i+1);
		scanf("%d", &nums[i]);
	}
	
	total_suma_datos = 0;
	printf("---- Impresión de datos del usuario ----\n");
	for(int i=0; i<4; i++){
		printf("nums[%d] = %d\n", i, nums[i]);
		total_suma_datos += nums[i];
	}

	media_aritmetica = total_suma_datos / 4.0;
	printf("Total suma datos: %d", total_suma_datos);
	printf("Media aritmética = %.2f", media_aritmetica);
}
