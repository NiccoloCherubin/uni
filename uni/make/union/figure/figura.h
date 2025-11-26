#include <stdlib.h>
typedef enum { Quadrato, Rettangolo, Cerchio, Triangolo } TipoFigura;

typedef struct {
  float lato;
} quadrato;

typedef struct {
  float base;
  float altezza;
} rettangolo;

typedef struct {
  float raggio;
} cerchio;

typedef struct {
  float base;
  float altezza;
} triangolo;

typedef struct {
  TipoFigura tipo;
  union {
    quadrato q;
    rettangolo r;
    cerchio c;
    triangolo t;
  };
} DatiFigura;

void quadrato_init(DatiFigura *df, float lato);
void rettangolo_init(DatiFigura *df, float base, float altezza);
void cerchio_init(DatiFigura *df, float raggio);
void triangolo_init(DatiFigura *df, float base, float altezza);
float area_figura(const DatiFigura *df);