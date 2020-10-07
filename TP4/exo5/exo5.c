#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[50];
	int compteur = 0;
	int i = 0;
	int mot = 1;
	float moyenne = 0;

	printf("entrez une phrase : ");
	gets(str);

	printf("vous avez entre: %s", str);

	printf("\nLa taille avec espaces est %d", strlen(str));

	for (i = 0; i < strlen(str); i++) {
		if (str[i] == ' ') {
			compteur++;
			mot++;
		}
	}

	float longueur = (strlen(str) - compteur);
	moyenne = longueur / mot;

	printf("\nLa taille sans espaces est %f", longueur);
	printf("\nvous avez entre %d mots", mot);
	printf("\nLa longeur moyenne des mots est %f", moyenne);

	return(0);
}