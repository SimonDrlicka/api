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
	predch = (pow(x, 2*n+1))/(faktorial(2*n+1));
	n++;
	predch = predch-(pow(x, 2*n+1))/(faktorial(2*n+1));
	n++;
	sinx = predch+(pow(x, 2*n+1))/(faktorial(2*n+1));
	n++;
	sinx = sinx-(pow(x, 2*n+1))/(faktorial(2*n+1));
	n++;
	//printf("%f", sinx-predch);
	while (sinx - predch > epsilon){
		//printf("%f", sinx);
		predch = sinx;
		sinx = predch+(pow(x, 2*n+1))/(faktorial(2*n+1));
		n++;
		sinx = sinx-(pow(x, 2*n+1))/(faktorial(2*n+1));
		n++;;

	}
	return sinx;
}

void main(void){
	int uhol;
	float radians, vysledok;
	printf("Zadaj uhol v stupnoch(od -90 do 90): ");
	scanf("%d", &uhol);

	radians = uhol*M_PI/180.0;
	printf("%f\n", radians);
	vysledok = sinus(radians, 0.000000001);
	printf("%f\n", vysledok);
}