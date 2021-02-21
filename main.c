#include <stdio.h>
#include <string.h>
#include "prepocet.c"


void main(void){
	int cislo;
	char c[3];
	printf("Zadaj cislo mensie ako 100: ");
	scanf("%d", &cislo);
	sprintf(c, "%d", cislo);
	dorimskej(c);
	printf("\n");
}