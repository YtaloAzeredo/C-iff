#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

#define TAM 15

void preencheString(char *s);
int verificaString(char *s);

int main(){
    
    char s[TAM];
	
    preencheString(s);

	
    if ( verificaString(s) ){
    	printf("\n\nEh um palindromo.");
	}
    else{
    	printf("\n\nNAO eh um palindromo.");
	}
    

    return 0;
}

void preencheString(char *s){
	int i;
    printf("\nEntre com uma palavra: ");
    gets(s);
	
	for(i=0; i< strlen(s); i++){
 		s[i] = tolower(s[i]);
	}
}


int verificaString(char *s){
	int n = strlen(s), i;
    
    for(i=0;i<n;i++) {
    	if(s[i] != s[n-i-1]){
		return 0;
		}
 	}
 	
return 1;
}
