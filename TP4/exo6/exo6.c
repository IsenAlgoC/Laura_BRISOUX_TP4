#include <stdlib.h>
#include <stdio.h>


int main() {
	int position = 0;
	int recherche;
	int myTab[100];
	time_t t;
	srand(time(&t));
	int i;


	for (position = 0; position < 100; position++) {
		myTab[position] = (rand() % 21);
	}
	printf("Voici le tableau : ");

	for (i = 0; i < 100; i++) {
		printf("%d /", myTab[i]);
	}
	printf("\n");

	printf("\nEntrez le nombre entre 0 et 20 que vous voulez chercher dans ce tableau : ");
	scanf_s("%d", &recherche);

	int* MyPtr = &myTab[0];
	int place = 1;
	int trouve = 0;

	printf("Le nombre a ete trouve au niveau des positions suivantes : ");

	while (place <= 100) {
		if (*MyPtr == recherche) {
			printf("%d, ", place);
			MyPtr++;
			place++;
			trouve++;
		}
		MyPtr++;
		place++;
	}

	if (trouve == 0) {
		printf("\nNous sommes desoles, nous n avons pas trouve votre nombre");
	}


	return(EXIT_SUCCESS);
}