/*Ejercicio 28: Escribir un programa que, dado un número por el usuario, muestre todos sus
divisores positivos. Recordar que un divisor es aquel que divide al número de
forma exacta (con resto 0).*/

#include <stdio.h>

int main(){
    int numero;
    int i;
    
    do{
        printf("Por favor digite el numero:");scanf("%i",&numero);
    }while(numero<=0);
    
    for (i=1; i<=numero/2; i++){
        if(numero % i ==0){
            printf("\nlos divisores son: %d",i);
        }
    }
    printf("\nSu divisor tambien es %i",numero);
    
    return 0;
}
