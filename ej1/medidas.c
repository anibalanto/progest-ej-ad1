#include "medidas.h"
#include <math.h>


float media(int arreglo[], int tamanio)
{
    float total = 0;
    for(int i = 0; i < tamanio; i++)
    {
        total += arreglo[i];
    }
    return total / tamanio;
}

float varianza(int arreglo[], int tamanio)
{
    float med = media(arreglo, tamanio);
    float accum = 0;
    for(int i = 0; i < tamanio; i++)
    {
        accum += pow(arreglo[i] - med, 2);
    }
    return accum / tamanio;

}
