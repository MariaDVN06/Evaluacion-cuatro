/*Ejercicio 23: Esccribir un programa para solicitar al usuario tres numeros y mostrar en
 pantalla al menor de los tres*/
 
 //Trabajaremos tambien con numeros decimales
 
 #include<stdio.h>
 
 
 int main(){
 	
 	float n1,n2,n3;
 	
 	printf("\nIntroduce tres numeros:");
 	scanf("%f %f %f", &n1, &n2, &n3);
 	
 	if(n1 < n2, n1 < n3){
 		printf("\nEl menor es:%.1f",n1);
    }
    
	else 
	if (n2 < n1, n2 < n3){
	   printf("\nEl menor es:%.1f",n2);
	}
	
	else 
	if (n3 < n1, n3){
		printf("\nEl menor es:%.1f",n3);
	}
	
	return 0;
}


