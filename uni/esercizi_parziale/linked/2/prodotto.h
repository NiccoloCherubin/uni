#define DIM_DESC 100

typedef struct{
int id;
char descrizione[DIM_DESC];
float prezzo;
}Prodotto;

typedef struct nodo {
Prodotto prodotto;
struct nodo *next;
} Nodo;

typedef Nodo* Lista;

void nuovaLista(Lista *l);
void inserimentoTesta(Lista *l, Prodotto prodotto);
void eliminaElemento(Lista* l, Prodotto prodotto);
void eliminaTutto(Lista *l);
void letturaDaFile(Lista *l);