#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void encontrarMaior(int *n, int *m){
	if (m > n)
	{
		printf("%i \n", m);
	}
	else
	{
		printf("%i \n", n);
	}
}

int main(int argc, char *argv[]) {
	int n, m;
	n = 10;
	m = 20;
	encontrarMaior(n, m);
	
	
	
	return 0;
}
