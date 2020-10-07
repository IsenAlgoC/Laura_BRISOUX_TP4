#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int main() {
	char mot[20];
	int taille;
	int moitie;
	bool pareil = true;
	printf("entrez le mot a tester: ");
	scanf_s("%s", &mot, (unsigned)_countof(mot));
	taille = strlen(mot);
	moitie = (int)(taille / 2);
	for (int i = 1; i <= moitie; i++) {
		if (mot[i - 1]!= mot[taille - i]) {
			pareil = false;

		}
	}

	if (pareil == true) {
		printf("%s est un palindrome", mot);

	}
	if (pareil == false) {
		printf("%s n est pas un palindrome", mot);

	}



	return (EXIT_SUCCESS);
}