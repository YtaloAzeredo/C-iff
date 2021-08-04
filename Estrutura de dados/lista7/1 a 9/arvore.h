typedef struct reg_no_arvore tipo_no_arvore;
typedef struct reg_pilha tipo_pilha;

tipo_pilha* criarPilhaVazia();
void incluir_no_arvore(tipo_no_arvore **sub_raiz, int chave);
void incluir_no_arvore_iterativo(tipo_no_arvore **sub_raiz, int chave);
int pilhaVazia(tipo_pilha*);
void empilhar(tipo_pilha* pilha, tipo_no_arvore *dado);
tipo_no_arvore* desempilhar (tipo_pilha* pilha);
void percurso_em_ordem_recursivo(tipo_no_arvore *sub_raiz);
void percurso_em_ordem_iterativo(tipo_no_arvore *sub_raiz, tipo_pilha* pilha);
tipo_no_arvore* desempilhar (tipo_pilha* pilha);
tipo_no_arvore* desempilhar(tipo_pilha* pilha);
int quantidadeElementosPilha(tipo_pilha*);
tipo_pilha* apagarPilha(tipo_pilha*);
int menor (tipo_no_arvore*);
int soma (tipo_no_arvore*);
int numero_nos(tipo_no_arvore*);
int media(tipo_no_arvore*);
int qtdFolha(tipo_no_arvore*);
int qtdNull(tipo_no_arvore*);
int alturaArvore(tipo_no_arvore*);
int multiploTres(tipo_no_arvore *sub_raiz);
int numComparacoes(tipo_no_arvore*, int);
int numero_comparacoes(tipo_no_arvore *sub_raiz, int chave);