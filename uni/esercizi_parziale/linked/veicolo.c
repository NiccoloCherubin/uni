#include "veicolo.h"
#include <stdio.h>

int verificaVeicolo(VeicoloConTipo veicolo) {
  Tipo_Veicolo tipo;
  return veicolo.tipo == (Tipo_Veicolo)0 ? 0 : 1; // auto = 0, moto = 1
}

void stampaInfo(VeicoloConTipo veicolo)
{
    printf("targa: %s \n", veicolo.dati.auto_.info.targa);
    printf("marca: %s \n", veicolo.dati.auto_.info.marca);
}

void stampaAuto(VeicoloConTipo auto_)
{
    stampaInfo(auto_);
    printf(" Ncavalli: %d \n", auto_.dati.auto_.cavalli);
}

void stampaMoto(VeicoloConTipo moto)
{
    stampaInfo(moto);
    printf(" N_Tempi: %d \n", moto.dati.moto.numero_tempi);
    printf("tipologia: %d \n", (int)moto.dati.moto.tipo);
}