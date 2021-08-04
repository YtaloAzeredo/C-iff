typedef struct reg_lista tipo_lista;

tipo_lista *criarListaVazia();
int quantidadeElementosLista(tipo_lista *lista);
int listaVazia(tipo_lista *lista);

void inserirElementoOrdenado(tipo_lista *lista, int dado);
int excluirElementoOrdenado(tipo_lista *lista, int dado);
tipo_lista *excluirLista(tipo_lista *lista);
int* obterElementos(tipo_lista *lista);

int verificarProfundidade(tipo_lista *lista, int dado);
float calcularMedia(tipo_lista *lista);
int compararListas(tipo_lista *lista1, tipo_lista *lista2);
