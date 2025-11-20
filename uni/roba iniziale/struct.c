#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int num;
    int dem;
}frazione;

void creaFrazione(frazione* f, int n, int d)
{
    f->num = n;
    f->dem = d;
}

int main (int argc, char** argv)
{
    frazione f1;

    creaFrazione(&f1, 5,6);
    printf("Frazione: %d/%d\n", f1.num, f1.dem);
    return 0;
    

}