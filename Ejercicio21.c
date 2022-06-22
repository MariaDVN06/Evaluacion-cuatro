/* Escribir un programa que solicite al usuario el ingreso de tres numeros diferentes y muestre en 
pantalla el mayor de los tres*/

//Trabajaremos con enteros

#include<stdio.h>

   int main () {
   	
   	int n1,n2,n3;
   	
   	printf("\nIntroduce tres numeros enteros diferentes:");
   	scanf("%i %i %i", &n1, &n2, &n3);
   	
   	if (n1 > n2 , n1 > n3){
   		printf("\nEl mayor es:%i",n1);
   	}
   	else
    if (n2 > n1 , n2 > n3){
   		printf("\nEl mayor es:%i",n2);
   	}
   	else 
	if(n3 > n1 , n3 > n2){
		printf("\nEl mayor es:%i",n3);
	}
	
   	return 0;
   	
   }
   
