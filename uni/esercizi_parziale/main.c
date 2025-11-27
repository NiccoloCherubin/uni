#include "persona.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  Persona p_studente;
  input_persona(&p_studente, "Mario", "Rossi", MASCHIO, studente);
  stampa_persona(&p_studente);

  Studente s1;
  Classe classe_1;
  input_classe(&classe_1, 'A', 3);
  input_studente(&s1, &p_studente, 12345, classe_1);

  Utente utenti[10];
  utenti[0].studente = s1;

  Persona p_docente;
  input_persona(&p_docente, "Anna", "Bianchi", FEMMINA, docente);
  stampa_persona(&p_docente);

  Docente d1;
  Classe classi[] = {classe_1};
  Materia materie[] = {Matematica, Italiano};
  input_docente(&d1, &p_docente, classi, materie, 1, 2);

  utenti[1].docente = d1;

  printf("studente da utenti \n");
  stampa_studente(&utenti[0].studente);

  printf("docente da utenti \n");
  stampa_docente(&utenti[1].docente);

  return 0;
}