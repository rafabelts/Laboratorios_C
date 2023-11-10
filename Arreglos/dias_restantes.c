/*
Hecho por: Rafael Alejandro Beltrán Santos
A partir del programa propuesto, que almacenaba en una tabla el total de días que tiene cada mes, crea otro que pida al usuario que le indique la fecha, detallando el día (1 al 31) yel mes (1=enero, 12=diciembre), como respuesta muestre en pantalla el numero de dias que quedan hasta fin de año
*/
#include <stdio.h>

int main(){
	int dia, mes, dias_transcurridos, dias_restantes;
	int total_dias_de_cada_mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	printf("Ingresa el día: ");
	scanf("%d", &dia);

	printf("Ingresa el número de mes: ");
	scanf("%d", &mes);

	dias_transcurridos = 0;
	for(int i=1; i<mes; i++){
		dias_transcurridos += total_dias_de_cada_mes[i-1];
	}
	dias_transcurridos += dia; 

	dias_restantes = 365 - dias_transcurridos;
	
	printf("\nFaltan %d días para que termine el 2023", dias_restantes);
}

