#include <stdio.h>
#include "kb.h"


int main () {

float radius = eingabeRadius();
float umfang = berechneUmfang(radius);
float fläche = berechneFläche(radius);

printf("Der Umfang des Kreises beträgt %f \n", umfang);
printf("Der Flächeninhalt des Kreises beträgt %f \n", fläche);

return 0;

}
	
