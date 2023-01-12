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

int main () {

float radius = eingabeRadius();
float umfang = berechneUmfang(radius);
float fläche = berechneFläche(radius);

printf("Der Umfang des Kreises beträgt %f \n", umfang);
printf("Der Flächeninhalt des Kreises beträgt %f \n", fläche);

return 0;

}
	
