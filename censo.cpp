#include <stdio.h>

int i, cont, acum, acumf, acumM, edad, genero, promedio, max, cens, porc;

int main (){
	
	printf("\n  Numero de personas a censar:\n  ");
	scanf("%d", &cens);
	
	for(i=0; i< cens; i++){
		
		printf(" \n Ingrese edad: \n ", i+1);
		scanf("%d", &edad);

		acum = acum + edad;
		cont= cont + 1;
		
		printf(" \n Ingrese genero: \n  ", i+1);
		printf("  0 (Femenino) || 1 (Masculino)\n  ");
		scanf("%d", &genero);
		
		if(genero == 0){
			acumf = acumf +1;
			if(edad > max){ //se fija si la nueva edad es mayor a la menor
				max = edad;
			}	
		}
		else{
		if(genero == 1){
			acumM = acumM +1;
		}
		else{
		printf("Error\n");
		}		
		}

printf("+-------------------------------+\n");

	}//fin for
	
	promedio= acum / cont;
	porc= (acumM * 100)/ cens;
    printf("  +----------------------------------+");
	printf("\n  | Promedio de edades= %d Años(aprox) |", promedio);
	printf("\n  | Porcentaje de hombres= %d          |", porc);
	printf("\n  | Edad maxima en femeninos= %d       |\n", max);
    printf("  +----------------------------------+");
	
}
