#define CAIXEIRO_H

typedef struct cidadeij CIDADEij;
typedef struct lista LISTA;

LISTA* inicializa();
int isEmpty(LISTA* l);
int insereCidades(LISTA* l, int n);
int insereCustos(LISTA*l, int i, int j, int d);
void imprimeLista(LISTA* l);