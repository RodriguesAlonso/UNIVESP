typedef struct ponto Ponto;

Ponto* pto_cria(float x, float y);

void pto_libera(Ponto* p);
void pto_acessar(Ponto* p, float* x, float* y);
void pto_atribuir(Ponto* p, float x, float y);
void pto_distancia(Ponto* p1, Ponto* p2)

