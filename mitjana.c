#include <stdio.h>

int main() {
	float suma=0.0;
	float mitjana=0.0;
	float nou_valor;
	int numero_repeticions= 0;
	char consulta='s';
	
	while (consulta=='s') {
		printf("DOna la seguent dada: ");
		scanf("%f", &nou_valor);
		suma=suma+nou_valor;
		numero_repeticions=numero_repeticions+1;
		printf("Vols continuar (s/n): ");
		scanf("%c", &consulta);
	}
}
