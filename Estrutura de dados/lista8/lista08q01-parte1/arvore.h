typedef struct reg_no_arvore tipo_no_arvore;
typedef struct reg_pilha tipo_pilha;

tipo_pilha* criarPilhaVazia();
void incluir_no_arvore(tipo_no_arvore **sub_raiz, int chave);
int pilhaVazia(tipo_pilha*);
void empilhar(tipo_pilha* pilha, tipo_no_arvore *dado);
tipo_no_arvore* desempilhar (tipo_pilha* pilha);
void percurso_em_ordem_recursivo(tipo_no_arvore *sub_raiz);
void copiar_arvore(tipo_no_arvore *sub_raiz, tipo_no_arvore **sub_raiz1);
