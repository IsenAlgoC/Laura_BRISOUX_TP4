#include <stdlib.h>
#include<stdio.h>
#include <conio.h>
#include <ctype.h>

#define TAILLETAB 20


int main() {
	char MyTab[TAILLETAB];
	char nom[20];
	char prenom[20];
	int ch;

	printf("\nRentrez un prenom: ");
	scanf_s("%s", prenom, (unsigned)_countof(prenom));
	printf("\nRentrez un nom: ");
	scanf_s("%s", nom, (unsigned)_countof(nom));


	printf("Rentrez un sexe: ");
	do {
		ch = _getch();
		ch = toupper(ch);
	}
	while ((ch != 'H') & (ch != 'F'));

	_putch(ch);
	char sexe[20];
	if (ch == 'H') {
		strcpy(sexe, "Monsieur");
	}
	if (ch == 'F') {
		strcpy(sexe, "Madame");
	}
	
	


	printf("\n%s %s %s ", sexe, prenom, nom);
	

	return (EXIT_SUCCESS);
}