#include <stdio.h>
#include "enum.h"

#define DIM_NOME_MAX 100
#define DIM_CLASSI_MAX 10
#define DIM_MATERIE_MAX 10

typedef struct {
char sezione;
short int anno;
}Classe;

typedef struct{
char nome[DIM_NOME_MAX];
char cognome[DIM_NOME_MAX];
Sesso sesso;
Ruolo ruolo;
} Persona;

typedef struct
{
    Persona persona;
    int matricola;
    Classe classe;
} Studente;

typedef struct
{
    Persona persona;    
    Classe classi[DIM_CLASSI_MAX];
    Materia materie_insegnate[DIM_MATERIE_MAX];
} Docente;

typedef struct
{
    Persona persona;    
    char mansione[DIM_NOME_MAX];
} Ata;

typedef struct
{
    Persona persona;    
    int anni_di_servizio;
} Preside;

typedef union {
    Studente studente;
    Docente docente;
    Ata ata;
    Preside preside;
} Utente;

void input_persona(Persona *p, char* nome, char* cognome, Sesso sesso,Ruolo r); 
void input_classe(Classe *c, char sezione, short int anno);
void input_studente(Studente *s, Persona *p, int matricola, Classe classe);
void input_docente(Docente *d, Persona *p, Classe *classi, Materia *materie, int num_classi, int num_materie);
void input_ata(Ata *a, Persona p, char* mansione);
void input_preside(Preside *p, Persona per, int anni_di_servizio);

void stampa_persona(Persona *p);
void stampa_studente(Studente *s);
void stampa_docente(Docente *d);
void stampa_ata(Ata *a);
void stampa_preside(Preside *p);
void stampa_utente(Utente *u, Ruolo *r);
