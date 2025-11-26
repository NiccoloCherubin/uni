#include "figura.h"

void quadrato_init(DatiFigura *df, float lato) {
     df->q.lato = lato;
    }
void rettangolo_init(DatiFigura *df, float base, float altezza) {
  df->r.base = base;
  df->r.altezza = altezza;
}
void cerchio_init(DatiFigura *df, float raggio) { 
    df->c.raggio = raggio;
 }
void triangolo_init(DatiFigura *df, float base, float altezza) {

  df->t.base = base;
  df->t.altezza = altezza;
}
float area_figura(const DatiFigura *df) {
  switch (df->tipo) {
    case Quadrato:
      return df->q.lato * df->q.lato;
    case Rettangolo:
      return df->r.base * df->r.altezza;
    case Cerchio:
      return 3.14159f * df->c.raggio * df->c.raggio;
    case Triangolo:
      return 0.5f * df->t.base * df->t.altezza;
    default:
      return 0.0f; // Caso non valido
  }
}