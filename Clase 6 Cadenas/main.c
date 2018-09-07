#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Actividad para la proxima*/
/*Variables*/ // Nombre, Apellido (Ingreso maximo de 20 caracteres c/u.
//Apellido y nombre ---> Concatenar c/sig. formato: Gomez,Juan Luis <-- Volver MAYUS las primera letra
//Cambiar formato SOLO en Apellido y nombre no en el paso anterior
int main()
{
    char nombre[20]; //En realidad son 19 caracteres si se resta el \0
    int cantidad;

    printf("Ingrese un nombre: ");

    fgets(nombre, 20, stdin); //Realiza un salto de linea y usar un caracter mas

    puts(nombre);

    nombre[strlen(nombre)-1] = '\0';

    cantidad = strlen(nombre);

    printf("Cantidad %d", cantidad);
    return 0;
}
//or

    /*strcpy(nombre, "juan"); // strcpy(origen, nombre);
    printf("%s", nombre);*/

    /*printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(nombre);    //scanf para con \0 cuando hay un espacio //usar gets para pedir nombre y apellido
    printf("Hola %s", nombre);*/


    /*compara = stricmp(nombre, otroNombre); //Permite la comparacion de nombres

    if(compara == 0)
    {
        printf("Son iguales!");
    }
    else
    {
        if(compara > 0)
        {
            printf("%s Esta despues que %s", otroNombre, nombre);
        }
    }*/

    /*cantidad = strlen(nombre);*/ //Permite saber la cantidad de caracteres
    /*printf("\n%s", nombre);*/ //Para mostrar nombre
    /*printf("\nCompara %d", compara);*/ //Para mostrar comparacion nombres
    /*printf("\nLa cantidad de caraceres: %d", cantidad);*/ //Para mostrar la cantidad de caracteres
    /*strlwr(otroNombre);*/ //Sirve para mostrar en minuscula strupr es su version para mayuscula
    /*strcat(otroNombre, nombre);*/ //Sirve para concatenar

    /*char nombre[20] = "Anibal";
    char otroNombre[200] = "Alberto";
    int cantidad;
    int compara;
    int i;*/

    /*for(i = 0; i < strlen(nombre); i++)
    {
        if(tolower(nombre[i]) == 'a')
        {
            printf("%c ", nombre[i]);
        }
    }*/

    //or

    /*while(nombre[i] != '\0')
    {
        if(tolower(nombre[i]) == 'a')
        {
            printf("%c ", nombre[i]);
        }
        i++;
    }

    printf(" %s", otroNombre);*/
