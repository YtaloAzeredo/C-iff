#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, *ptrN;
	n = 10;
	ptrN = &n;
	printf("%i \n", *ptrN);
	printf("%p \n%p", &n, &ptrN);
	n = *ptrN + 5;
	printf("\n%i", n);
	
	return 0;
}
