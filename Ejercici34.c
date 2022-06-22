/*Ejercicio 34:Escribir un programa que, dado un numero entero por el ususario (guardado como int), muestre
la suma de todos sus digitos.*/  

#include<stdio.h>

   int main() {
   	
   	int x, suma_total = 0;
   	
   printf("Introduce un numero entero");
   scanf("%i", &x);
    
      while (x>0){
      	suma_total = suma_total + (x%10);
      	x = x / 10;
      }
   	   	
   	printf("\nLa sumatoria de todos los numeros de un entero es:%i",suma_total);
   	
   return 0;
   	
   }
