#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void lerV(int *v);
void inverterV(int *v);
void mostrarV(int *v);

int main(int argc, char *argv[]) 
{
	int v[15];
	
	lerV(v);
	
	inverterV(v);
	
	mostrarV(v);
	
	return 0;
}
	
 void lerV(int *v)
 {
	int n;
 	for (n=0; n<=14; n++)
 	{
 		printf("\nDigite um numero do vetor: ");
 		scanf("%d", &v[n] );
	}
 
 }
	 
void inverterV(int *v)
{
	int n, j, aux;
	for (n=0, j=14; n<=j; n++, j--)
	{
		aux = v[n];
		v[n] = v[j];
		v[j] = aux;
	}

}

void mostrarV(int *v)
{
	int n;
	for (n=0; n<=14; n++)
	{
		printf("\nVetor Invertido: %d", v[n] );
	}
}

