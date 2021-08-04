typedef struct reg_pilha tipo_pilha;

tipo_pilha *criarPilhaVazia();
int quantidadeElementosPilha(tipo_pilha *pilha);
int pilhaVazia(tipo_pilha *pilha);
tipo_pilha *excluirPilha(tipo_pilha *pilha);
int* obterElementos(tipo_pilha *pilha);

int inserirNoTopo(tipo_pilha *pilha, int dado);
void excluirNoTopo(tipo_pilha *pilha);



