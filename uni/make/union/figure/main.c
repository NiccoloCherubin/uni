#include <stdio.h>
#include "figura.h"
#include <stdlib.h>

int main (int argc, char **argv)
{
    DatiFigura df1, df2, df3, df4;
    df1.tipo = Quadrato;
    df2.tipo = Rettangolo;
    df3.tipo = Cerchio;
    df4.tipo = Triangolo;

    quadrato_init(&df1, 5.0f);
    rettangolo_init(&df2, 4.0f, 6.0f);
    cerchio_init(&df3, 3.0f);
    triangolo_init(&df4, 4.0f, 5.0f);

    printf("Area del quadrato: %.2f\n", area_figura(&df1));
    printf("Area del rettangolo: %.2f\n", area_figura(&df2));
    printf("Area del cerchio: %.2f\n", area_figura(&df3));
    printf("Area del triangolo: %.2f\n", area_figura(&df4));
    
    return 0;
}