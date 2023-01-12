#include <stdio.h>

float eingabeRadius() {

	float radius;
	printf("Geben Sie den Radius des Kreises ein:\n");
	scanf("%f", &radius);
	return radius;
}

float berechneUmfang (float radius) {

	float umfang;
	umfang = radius * 2 * 3.141593;
	return umfang;

}

float berechneFläche (float radius) {

	float fläche;
	fläche = radius * radius * 3.141593;
	return fläche;
}

	
