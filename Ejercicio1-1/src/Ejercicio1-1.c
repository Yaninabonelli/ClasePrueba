#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);

	int numeroUno;
	int numeroDos;
	int resultado;

	printf("Numero uno: ");
	scanf("%d", &numeroUno);
	printf("Numero dos: ");
	scanf("%d", &numeroDos);

	resultado = numeroUno + numeroDos;

	printf("El resultado de sumar esto: %d mas esto: %d es: %d",
			numeroUno, numeroDos, resultado);

	return 0;
}

/*
   SUMA- RESTA- MULTIPLICACION Y DIVISION
    int main(void) {

	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	int suma;
	int resta;
	int multiplicacion;
	int division;

	printf("Ingrese un numero ");
	scanf("%d", &numero1);

	printf("\nIngrese un numero ");
	scanf("%d", &numero2);

	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;

	printf("\nLa suma de %d y %d es %d", numero1, numero2, suma);
	printf("\nLa resta de %d y %d es %d", numero1, numero2, resta);
	printf("\nLa multiplicacion de %d y %d es %d", numero1, numero2, multiplicacion);
	printf("\nLa division de %d y %d es %d", numero1, numero2, division);

	return EXIT_SUCCESS;
}
 */
