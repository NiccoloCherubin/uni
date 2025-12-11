#include <stdio.h>
#include <string.h>
#include "persona.h"

void input_persona(Persona *p, char* nome, char* cognome, Sesso sesso,Ruolo r)
{
    strncpy(p->nome, nome, DIM_NOME_MAX);
    strncpy(p->cognome, cognome, DIM_NOME_MAX);
    p->sesso = sesso;
    p->ruolo = r;
} 
void input_classe(Classe *c, char sezione, short int anno)
{
    c->sezione = sezione;
    c->anno = anno;
}
void input_studente(Studente *s, Persona *p, int matricola, Classe classe)
{
    s->persona = *p;
    s->matricola = matricola;
    s->classe = classe;
}
void input_docente(Docente *d, Persona *p, Classe *classi, Materia *materie, int num_classi, int num_materie)
{
    d->persona = *p;
    for(int i = 0; i < num_classi; i++) {
        d->classi[i] = classi[i];
    }
    for(int j = 0; j < num_materie; j++) {
        d->materie_insegnate[j] = materie[j];
    }
}
void input_ata(Ata *a, Persona p, char* mansione)
{
    a->persona = p;
    strncpy(a->mansione, mansione, DIM_NOME_MAX);
}
void input_preside(Preside *p, Persona per, int anni_di_servizio)
{
    p->persona = per;
    p->anni_di_servizio = anni_di_servizio;
}

void stampa_persona(Persona *p)
{
    printf("Nome: %s\n", p->nome);
    printf("Cognome: %s\n", p->cognome);
    printf("Sesso: %s\n", (p->sesso == MASCHIO) ? "Maschio" : "Femmina");
    printf("Ruolo: ");
    switch(p->ruolo) {
        case studente:
            printf("Studente\n");
            break;
        case docente:
            printf("Docente\n");
            break;
        case ata:
            printf("ATA\n");
            break;
        case preside:
            printf("Preside\n");
            break;
        default:
            printf("Sconosciuto\n");
    }
}
void stampa_studente(Studente *s)
{
    stampa_persona(&s->persona);
    printf("Matricola: %d\n", s->matricola);
    printf("Classe: %d%c\n", s->classe.anno, s->classe.sezione);
}
void stampa_docente(Docente *d, int materie, int classi)
{
    stampa_persona(&d->persona);
    printf("Classi insegnate:\n");
    for(int i = 0; i < classi; i++) {
        printf(" - %d%c\n", d->classi[i].anno, d->classi[i].sezione);
    }
    printf("Materie insegnate:\n");
    for(int j = 0; j < materie; j++) {
        printf(" - %d\n", d->materie_insegnate[j]);
    }
}
void stampa_ata(Ata *a)
{
    stampa_persona(&a->persona);
    printf("Mansione: %s\n", a->mansione);
}
void stampa_preside(Preside *p)
{
    stampa_persona(&p->persona);
    printf("Anni di servizio: %d\n", p->anni_di_servizio);
}
void stampa_utente(Utente *u, Ruolo *r, int materie, int classi)
{
    switch(*r) {
        case studente:
            stampa_studente(&u->studente);
            break;
        case docente:
            stampa_docente(&u->docente,materie,classi);
            break;
        case ata:
            stampa_ata(&u->ata);
            break;
        case preside:
            stampa_preside(&u->preside);
            break;
        default:
            printf("Ruolo sconosciuto\n");
    }
}