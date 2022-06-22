/*.Ejercio 30: Escribir un programa que, dado un número entero positivo, 
calcule y muestre su factorial. El factorial de un número se obtiene multiplicando 
todos los números enteros positivos que hay entre el 1 y ese número.
El factorial de 0 es 1.*/

#include <stdio.h>
#include<math.h>

int main(){
    unsigned int i, numero, factorial = 1;
    
    printf("Por favor ingrese el numero para hayar el factorial: ");
    scanf("%u",&numero);
    
    for(i=1;i<=numero;i++){
        factorial = factorial * i;
        
    }
    
    printf("Mostrar el resultado del factorial del numero: %u",factorial);

    return 0;
    
}
