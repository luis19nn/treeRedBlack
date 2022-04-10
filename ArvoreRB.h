/*
*** DEFININDO A ESTRUTURA
*/

typedef struct NO* ArvoreRB;


/*
*** CRIAÇÃO DA ÁRVORE
*/

ArvoreRB* cria_ArvoreRB();


/*
*** LIBERAÇÃO DA ÁRVORE
*/

void libera_ArvoreRB(ArvoreRB* raiz);


/*
*** CONSULTA ÁRVORE
*/

int consulta_ArvoreRB(ArvoreRB *raiz, int valor);


/*
*** INSERÇÃO
*/

int insere_ArvoreRB(ArvoreRB* raiz, int valor);


/*
*** REMOÇÃO
*/

int remove_ArvoreRB(ArvoreRB *raiz, int valor);


/*
*** PROPRIEDADES DA ÁRVORE
*/

int estaVazia_ArvoreRB(ArvoreRB *raiz);

int totalNO_ArvoreRB(ArvoreRB *raiz);

int altura_ArvoreRB(ArvoreRB *raiz);


/*
*** PERCURSO
*/

void preOrdem_ArvoreRB(ArvoreRB *raiz, int H);

void emOrdem_ArvoreRB(ArvoreRB *raiz, int H);

void posOrdem_ArvoreRB(ArvoreRB *raiz, int H);
