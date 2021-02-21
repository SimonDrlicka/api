#include <stdio.h>
#include <math.h>

int faktorial(int n){
	if (n==0){
		return 1;
	}else{
		return n * faktorial(n-1);
	}
}


float sinus(float x, float epsilon){
	float sinx, predch;
	int n = 0;
	predch = (pow(-1, n) * pow(x, 2*n+1))/(faktorial(2*n+1));
	n++;
	sinx = predch+(pow(-1, n) * pow(x, 2*n+1))/(faktorial(2*n+1));
	//printf("%f", sinx-predch);
	while (sinx - predch > epsilon){
		//printf("%f", sinx);
		predch = sinx;
		sinx = predch+(pow(-1, n) * pow(x, 2*n+1))/(faktorial(2*n+1));

	}
	return sinx;
}

void main(void){
	int uhol;
	float radians, vysledok;
	printf("Zadaj uhol v stupnoch: ");
	scanf("%d", &uhol);

	radians = uhol*M_PI/180.0;
	printf("%f\n", radians);
	vysledok = sinus(radians, 0.00001);
	printf("%f", vysledok);
}