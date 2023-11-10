/*
Hecho por: Rafael Alejandro Beltrán Santos
Ejercicio 5. Programa que pida 10 números, calcule su media y despúes muestre los que están por encima de la media.
*/
#include <stdio.h>
int main(){
	int total_suma_datos, media;	
	int nums[10] = {};
	printf("---- Lectura de datos ----\n");
	total_suma_datos = 0;
	for(int i=0; i<10; i++){
		printf("Ingrese el %d° valor: ", i+1);
		scanf("%d", &nums[i]);
		total_suma_datos += nums[i];
	}
	
	media = total_suma_datos / 10;
	printf("\n---- Impresión de datos mayores a la media ----\n");
	for(int i=0; i<10; i++){
		if(nums[i] > media){
			printf("%d\n", nums[i]);
		}
	}
}
