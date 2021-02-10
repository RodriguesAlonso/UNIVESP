#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto.h"

struct ponto
{
    float x;
    float y;
};

Ponto* pto_cria(float x, float y){
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (p != NULL){
        p->x = x
        p->y = y
    }
    return p;

    void pto_libera(Ponto* p){
        free(p);
    }
}
