#include <stdio.h>
#include <string.h>

void dorimskej(char *cislo){
	int dlzka, pocitadlo, pozicia;
	char vysledok[10];
	dlzka = strlen(cislo);
	pocitadlo = 0;
	pozicia = 0;
	while (pocitadlo < dlzka){
		cifra = cislo[pocitadlo];
		switch(cifra){
			case '1':
				if (pocitadlo == 0){
					printf("X");
				}else if

			case '2':
		}
	}
}

void main(void){
	int cislo;
	char c[3];
	printf("Zadaj cislo mensie ako 100: ");
	scanf("%d", &cislo);
	sprintf(c, "%d", cislo);
	printf("\nCislo je: %s\n", c);

	dorimskej(c);
}