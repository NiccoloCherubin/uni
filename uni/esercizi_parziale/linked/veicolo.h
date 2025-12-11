#include <stdio.h>
#include "enum.h"

#define DIM_TARGA 8
#define DIM_STRING 50

typedef struct {
    char targa[DIM_TARGA];
    char marca[DIM_STRING];    
} InfoGenerali;


typedef struct
{    
    InfoGenerali info;
    int cavalli;
} Auto;

typedef struct
{
    InfoGenerali info;
    int numero_tempi;
    Tipo_moto tipo;
} Moto;

typedef union
{
    Auto auto_;
    Moto moto;

} Veicolo;