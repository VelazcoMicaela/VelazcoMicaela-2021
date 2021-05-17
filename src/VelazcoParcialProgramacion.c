#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[21];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

void actualizarRecuperados(ePais[],int,int);
void invertirCadena(char cadena[]);
void ordenarCaracteres(char cadena[]);

int main(void) {

	 ePais unPais;
	int recuperadosDelDia;

	strcpy(unPais.nombre,"Argentina");
	unPais.recuperados=0;
	recuperadosDelDia=4;

	printf("Hay en total de %d en %s\n",unPais.recuperados,unPais.nombre);
	actualizarRecuperados(unPais.nombre,recuperadosDelDia,&unPais.recuperados);
	printf("Hay en total de %d en %s",unPais.recuperados,unPais.nombre);

	return EXIT_SUCCESS;
}

/*1. Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres),
 * infectados(int), recuperados(int) y muertos(int). Desarrollar una función
 * llamada actualizarRecuperados que reciba el país y los recuperados del dia y
 *que acumule estos a los que ya tiene el país. La función no devuelve nada.*/

void actualizarRecuperados(ePais nombre[],int recuperadosDia,int* totalRecuperados)
{
    *totalRecuperados += recuperadosDia;
    printf("Se sumaron %d a los recuperados.\n",recuperadosDia);
}

/*2. Crear una función que se llame invertirCadena que reciba una cadena de caracteres
 * como parámetro y su responsabilidad es invertir los caracteres de la misma.
Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU * */

void invertirCadena(char cadena[])
{
	int largoCadena;
	int total;

	largoCadena=strlen(cadena);
	for(int i=0; i<largoCadena; i++)
	{
		total=i-largoCadena;
		cadena[i]=cadena[total];
	}

	printf("%s",cadena);
}


/*3. Crear una función que se llame ordenarCaracteres que reciba una cadena de
 * caracteres como parámetro y su responsabilidad es ordenarlos caracteres de manera
 * ascendente dentro de la cadena.
Ejemplo si le pasamos "algoritmo" la deja como "agilmoort" *
void ordenar
 */

void ordenarCaracteres(char cadena[])
{

}



