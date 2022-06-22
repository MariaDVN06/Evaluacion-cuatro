/*Escribir un programa que permita saber si un año es bisiesto. Para que un año sea bisiesto debe ser divisible 
por 4 y no debe ser divisible por 100, exepto que tambien sea divisible por 400*/


#include<stdio.h>
#include<conio.h>

    int main() {

    	int ano;

    	printf("Introduce un ano:");scanf("%i",&ano);

        if (ano % 4 == 0 && ano % 100 != 0){
		   printf("\nEl ano %i es bisiesto", ano);
		   
     	}
	    else if(ano % 400 == 0  && ano % 100 != 0){
			printf("\nEl ano %i es bisiesto", ano);
	    }   
	    else {
		   printf("El ano %i no es bisiesto", ano);
		}
		



		return 0;

	}
