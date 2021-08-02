#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int lerV(int *v);
int verificarV(int *v);

int main(int argc, char *argv[]) 
{
	int v[30], e;
	
	lerV(v);
	
	e = 0;
	e = verificarV(v);
	
	if (e == 1)
	{
		printf("\nO numero se encontra no vetor.");
	}
	else
	{
		printf("\nO numero NAO se encontra no vetor.");
	}
	
	return 0;
}
	
 int lerV(int *v)
 {
	int n;
 	for (n=0; n<=29; n++)
 	{
 		printf("\nDigite um numero do vetor: ");
 		scanf("%d", &v[n] );
	}
 return v;
 }
	 
int verificarV(int *v)
{
	int n, x, u;
	printf("\nDigite um numero para saber se ele esta no vetor: ");
	scanf("%d", &x);
	u = 0;
	for (n=0; n<=29; n++)
	{
		if ( x == v[n] )
		{
			u = 1;
		}
		else if (u != 1)
		{
			u = 0;
		}
	}
return u;
}

