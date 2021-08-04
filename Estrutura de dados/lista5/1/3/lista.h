typedef struct reg_lista tipo_lista;
//typedef struct no tipo_no;

tipo_lista *criarListaVazia();
int quantidadeElementosLista(tipo_lista *lista);
int listaVazia(tipo_lista *lista);
tipo_lista *excluirLista(tipo_lista *lista);
int* obterElementos(tipo_lista *lista);

void inserirNoFim(tipo_lista *lista, int dado);
void excluirNoFim(tipo_lista *lista);

tipo_lista *apagarElementosIguais(tipo_lista *lista, int dado);
//tipo_no *excluir(tipo_no *inicio, int dado);


