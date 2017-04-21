#include <stdio.h>
#include <math.h>

/**
* resultados para los valores
* {22, 25, 30, 20, 33, 43, 20, 22, 21, 25}
*/

#define VAL_MEDIA 26.1
#define VAL_VARIANZA 48.4899998

/**
* error aceptado
* {22, 25, 30, 20, 33, 43, 20, 22, 21, 25}
*/

#define ERROR 0.01

int pasa_evaluacion(float med, float var)
{
    float error_media = fabs(med - VAL_MEDIA);
    float error_varianza = fabs(var - VAL_VARIANZA);
    printf("error media = %f, error varianza = %f\n", error_media, error_varianza);
    if (error_media < ERROR && error_varianza < ERROR)
    {
        return 1;
    }
    return 0;
}
