#include<stdio.h>
#include<stdlib.h>

#define INPUTBUFFSIZE 256

int main(){
	char Input_Buff[INPUTBUFFSIZE];

	fprintf(stdout, "Bitte Text eingeben: ");
	if(fgets(Input_Buff, INPUTBUFFSIZE, stdin) ==
	NULL){
		fprintf(stderr, "Fehlerhafter Input.");
		abort();
	}

	else fprintf(stdout, "Eingabe: %s",
	Input_Buff);

	exit(0);
}
