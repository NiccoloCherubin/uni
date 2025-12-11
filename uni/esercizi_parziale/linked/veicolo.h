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
    Tipo_Veicolo tipoV;
    InfoGenerali info;
    int cavalli;
} Auto;

typedef struct
{
    Tipo_Veicolo tipoV;
    InfoGenerali info;
    int numero_tempi;
    Tipo_moto tipo;
} Moto;

typedef union
{
    Auto auto_;
    Moto moto;    
} Veicolo;

typedef struct { // struct fatta per sapere il tipo del veicolo
    Tipo_Veicolo tipo;
    Veicolo dati;
} VeicoloConTipo;

void stampaInfo(VeicoloConTipo veicolo);
void stampaAuto(VeicoloConTipo auto_);
void stampaMoto(VeicoloConTipo moto);
int verificaVeicolo(VeicoloConTipo veicolo);