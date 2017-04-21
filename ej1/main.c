#include <stdio.h>
#include <stdlib.h>
 /**
 * Definir las funciones, media y varianza en el
 * archivo medidas.c, la cátedra solo da medidas.h
 *
 * Vea si pasa la evaluación.
 */

#include "medidas.h"
#include "evaluacion.h"



int main()
{
    int arreglo[10] = {22, 25, 30, 20, 33, 43, 20, 22, 21, 25};
    int tamanio = sizeof(arreglo) / sizeof(int);

    float med = media(arreglo, tamanio);
    float var = varianza(arreglo, tamanio);

    printf("media: %f, varianza: %f\n", med, var);

    if(pasa_evaluacion(med, var))
    {
         printf("paso! siga con otros ejecicios y pregunte a los ayudantes las dudas!\n");
    }
    else
    {
        printf("no paso! siga codeando y pregunte a los ayudantes! NO SE RINDA!\n");
    }
    return 0;
}

