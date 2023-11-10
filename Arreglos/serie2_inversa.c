/*
Hecho por: Rafael Alejandro Beltrán Santos
Ejercicio 4. Programa que pida 10 números al usuario y luego los muestre de manera inversa.
*/
#include <stdio.h>
int main(){
	int nums[10] = {};
	
	printf("---- Lectura de datos del usuario ----\n");
	for(int i=0; i<10; i++){
		printf("Ingrese el %d° valor: ", i+1);
		scanf("%d", &nums[i]);
	}
	
	printf("\n---- Impresión de datos en manera inversa ----\n");
	for(int i=10-1; i>=0; i--){
		printf("%d\n", nums[i]);
	}
}
