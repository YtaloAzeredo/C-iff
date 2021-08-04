#define TAM 50
typedef struct no tipo_no;
tipo_no *incluir(tipo_no *inicio, char nome[TAM]);
tipo_no *excluir(tipo_no *inicio, char nome[TAM]);
int buscar(tipo_no *inicio, char nome[TAM]);
tipo_no *limparLista(tipo_no *inicio);
void imprimir(tipo_no *inicio);

