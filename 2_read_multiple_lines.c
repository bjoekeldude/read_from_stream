#include<stdio.h>
#include<stdlib.h>

#define COLBUFFSIZE 256
#define	ROWBUFFSIZE 10

int main(){
	char Input_Buff[ROWBUFFSIZE][COLBUFFSIZE];

	fprintf(stdout, "Bitte Text eingeben: ");
	for(int i=0; i<ROWBUFFSIZE; i++){

		if(fgets(Input_Buff[i], COLBUFFSIZE, stdin) ==
		NULL){
			fprintf(stderr, "Fehlerhafter Input.");
			abort();
		}
	}

	for(int i=0; i<ROWBUFFSIZE; i++){
		fprintf(stdout, "Eingabe: %s",
		Input_Buff[i]);
	}
	exit(0);
}
