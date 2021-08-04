#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, *ptrN, m, *ptrM;
	n = 10;
	m = 20;
	ptrN = &n;
	ptrM = &m;
	if (*ptrM > *ptrN)
	{
		printf("%i \n", *ptrM);
	}
	else
	{
		printf("%i \n", *ptrN);
	}
	
	return 0;
}
