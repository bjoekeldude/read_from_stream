#include<stdio.h>
#include<stdlib.h>

#define COLREADBUFFSIZE 256
#define COLBUFFSIZE 3
#define	ROWBUFFSIZE 3

int main(){
	char Input_Buff[ROWBUFFSIZE][COLREADBUFFSIZE];
	int  Matrix[ROWBUFFSIZE][COLBUFFSIZE];


	FILE *fildes = fopen("./test1.txt","r");
	if(fildes == NULL)
	{
		fprintf(stderr, "Could not open file");
		exit(-1);
	}
	
	for(int i=0; i<ROWBUFFSIZE; i++){

		if(fgets(Input_Buff[i], COLREADBUFFSIZE,
		fildes) == NULL){
			fprintf(stderr, "Fehlerhafter Input.");
			abort();
		}
	}

	for(int i=0; i<ROWBUFFSIZE; i++){
		fprintf(stdout, "Reihe %i: %s",
		i, Input_Buff[i]);
	}

	//Nutzen Sie strtok um die Zeilen in einzelne
	//Token zu zerlegen
	//
	//Nutzen Sie atoi um aus den Token Integer so
	//generieren
	//
	//Schreiben Sie eine Funktion welche die
	//Determinante der Matrix bestimmt


	exit(0);
}
