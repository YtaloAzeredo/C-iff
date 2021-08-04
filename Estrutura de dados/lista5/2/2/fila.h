typedef struct reg_fila tipo_fila;

tipo_fila *criarFilaVazia();
int quantidadeElementosFila(tipo_fila *fila);
int filaVazia(tipo_fila *fila);
tipo_fila *excluirFila(tipo_fila *fila);
int* obterElementos(tipo_fila *fila);

int inserirNoFim(tipo_fila *fila, int dado);
void excluirNoInicio(tipo_fila *fila);



