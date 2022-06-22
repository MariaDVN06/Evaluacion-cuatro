/*Ejercicio 27:Escribir un programa que muestre la sumatoria de todos los numeros entre el 0 y el 100*/

#include<stdio.h>

   int main() {
   	
   	int i, suma_total;
   	for(i=0;i<=100;i++){
   		suma_total += i;
   		printf("%i",i);
   	}
   	printf("\nLa sumatoria de todos los numeros entre el 0 y el 100 es:%i",suma_total);
   	
   return 0;
   	
   }
