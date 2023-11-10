/*
Hecho por: Rafael Alejandro Beltrán Santos
Ejercicio 6. Pide al usuario 10 numeros entero y muestre el mayor de ellos.
*/
#include <stdio.h>
int main(){
	int num_mayor;
	int nums[10]={};
	
	num_mayor=0;
	for(int i=0; i<10; i++){
		printf("Ingrese el %d° valor: ", i+1);
		scanf("%d", &nums[i]);
	
		if(nums[i] > num_mayor){
			num_mayor=nums[i];
		}
	}

	printf("El mayor de ellos es: %d\n", num_mayor);
}
