typedef struct reg_lista tipo_lista;
typedef struct no tipo_no;

tipo_lista *criarListaVazia();
int quantidadeElementosLista(tipo_lista *lista);
int listaVazia(tipo_lista *lista);
tipo_lista *excluirLista(tipo_lista *lista);
int* obterElementos(tipo_lista *lista);

int inserirNoFim(tipo_lista *lista, int dado);
void excluirNoInicio(tipo_lista *lista);

int pilhasIguais(tipo_lista *lista1, tipo_lista *lista2);



