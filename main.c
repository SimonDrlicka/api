#include <stdio.h>
#include <string.h>
/*
void dodvojkovej(int cislo){
	int vysledok[16];
	int pocitadlo = 0, zvysok;

	while (cislo > 0){
		zvysok = cislo %2;
		//zvysok = zvysok + '0';
		vysledok[pocitadlo] = zvysok;
		pocitadlo ++;
		cislo = cislo / 2;
	}
	pocitadlo -= 1;
	while (pocitadlo > -1){
		printf("%d", vysledok[pocitadlo]);
		pocitadlo --;
	}
}
*/

void dodvojkovej(int cislo){
	if (cislo == 1){
	}else{
		dodvojkovej(cislo);
		printf("%d", cislo);
	}
}


int main(){
	int cislo = 33777;
	int cislo2 = 'X';

	printf("Cislo %d v sestnastkovej: %x\n",cislo, cislo);
	

	printf("Cislo %d c dvojkovej: ", cislo);
	
	dodvojkovej(cislo);
	printf("\n");
	printf("Cislo %c v  sestnastkovej: %x\n",cislo2, cislo2);
	printf("Cislo %c dvojkovej: ", cislo2);
	dodvojkovej(cislo2);
	printf("\n");
	return 0;
}