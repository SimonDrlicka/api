#include <stdio.h>

void flt(){
	float epsilon, predosle, cislo;
	int delitel = 2;
	epsilon = 1.0/delitel;
	//printf("%f", epsilon);
	cislo = 1.0 + epsilon;
	delitel = delitel * 2;
	while (cislo != 1.0){
		predosle = epsilon;
		epsilon = 1.0/delitel;
		cislo = 1.0+epsilon;
		delitel = delitel * 2;
		//printf("%f | %f | %f | %d\n", predosle, epsilon, cislo, delitel);
	}
	printf("FLT_EPSILON: %e\n", predosle);
}

void dbl(){
	double epsilon, predosle, cislo;
	double delitel = 2.0;
	epsilon = 1.0/delitel;
	//printf("%f", epsilon);
	cislo = 1.0 + epsilon;
	delitel = delitel * 2;
	while (cislo != 1.0){
		predosle = epsilon;
		epsilon = 1.0/delitel;
		cislo = 1.0+epsilon;
		delitel = delitel * 2;
		//printf("%f | %f | %lf | %f\n", predosle, epsilon, cislo, delitel);
	}
	printf("DBL_EPSILON: %e\n", predosle);
}

void main(void){
	flt();
	dbl();
}