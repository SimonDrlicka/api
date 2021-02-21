void dorimskej(char *cislo){
	int dlzka, pocitadlo, pozicia;
	char vysledok[10];
	dlzka = strlen(cislo);
	pocitadlo = 0;
	pozicia = 0;
	//printf("Dlzka je: %d",dlzka);
	printf("Vysledok je: ");
	for(dlzka; dlzka !=0; dlzka = dlzka-1){
		switch(cislo[pocitadlo]){
			case '1':
				if (dlzka == 3){
					printf("C");
				} else if (dlzka == 2){
					printf("X");
				} else if(dlzka == 1){
					printf("I");
				}break;

			case '2':
				if (dlzka == 2){
					printf("XX");
				}else if(dlzka == 1){
					printf("II");
				}break;

			case '3':
				if (dlzka == 2){
					printf("XXX");
				}else if(dlzka == 1){
					printf("III");
				}break;

			case '4':
				if (dlzka == 2){
					printf("XL");
				}else if (dlzka == 1){
					printf("IV");
				}break;

			case '5':
				if (dlzka == 2){
					printf("L");
				}else if(dlzka == 1){
					printf("V");
				}break;

			case '6':
				if (dlzka == 2){
					printf("LX");
				}else if (dlzka == 1){
					printf("VI");
				}break;

			case '7':
				if (dlzka == 2){
					printf("LXX");
				}else if (dlzka == 1){
					printf("VII");
				}break;
			case '8':
				if (dlzka == 2){
					printf("LXXX");
				}else if(dlzka == 1){
					printf("VIII");
				}break;
			case '9':
				if (dlzka == 2){
					printf("XC");
				}else if(dlzka==1){
					printf("IX");
				}break;
			case '0':
				break;
		}
		pocitadlo ++;
	}
}