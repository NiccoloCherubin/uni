#include <stdio.h>
#define DIM 100

void stampa(int  matrix[][DIM], int dim_logica)
{
    for(int i = 0; i < dim_logica; i++)
    {
        for(int j = 0; j < DIM; j++)
        {
            printf("%4d ", matrix[i][j]);
        }
    }
}


int main (int argc, char ** argv)
{
    int matrix[DIM][DIM];
    int dim_logica = 20;

    stampa(matrix, dim_logica);

    return 0;
}