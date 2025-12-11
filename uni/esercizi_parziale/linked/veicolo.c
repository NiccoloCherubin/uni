#include "veicolo.h"
#include <stdio.h>
#include <string.h>

int verificaVeicolo(VeicoloConTipo veicolo) {
  Tipo_Veicolo tipo;
  return veicolo.tipo == (Tipo_Veicolo)0 ? 0 : 1; // auto = 0, moto = 1
}

void stampaInfo(VeicoloConTipo veicolo) {
  printf("targa: %s \n", veicolo.dati.auto_.info.targa);
  printf("marca: %s \n", veicolo.dati.auto_.info.marca);
}

void stampaAuto(VeicoloConTipo auto_) {
  stampaInfo(auto_);
  printf(" Ncavalli: %d \n", auto_.dati.auto_.cavalli);
}

void stampaMoto(VeicoloConTipo moto) {
  stampaInfo(moto);
  printf(" N_Tempi: %d \n", moto.dati.moto.numero_tempi);
  printf("tipologia: %d \n", (int)moto.dati.moto.tipo);
}

VeicoloConTipo creaAuto(char *targa, char *marca, int cavalli) {
  VeicoloConTipo v;
  v.tipo = Automobile;
  strcpy(v.dati.auto_.info.targa, targa);
  strcpy(v.dati.auto_.info.marca, marca);
  v.dati.auto_.cavalli = cavalli;
  return v;
}

VeicoloConTipo creaMoto(char *targa, char *marca, int tempi, Tipo_moto tipo) {
  VeicoloConTipo v;
  v.tipo = Motocicletta;
  strcpy(v.dati.moto.info.targa, targa);
  strcpy(v.dati.moto.info.marca, marca);
  v.dati.moto.numero_tempi = tempi;
  v.dati.moto.tipo = tipo;
  return v;
}