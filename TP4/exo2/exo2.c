#include <stdlib.h>
#include<stdio.h>


#define SEPARATEUR '/'
#define TAILLETAB1 20


int main() {
	int MyTab1[TAILLETAB1];
	int nombre = 1;
	int i = 0;
	

	for (nombre = 1; nombre <= 20; nombre++) {
		MyTab1[i] = nombre;
		i++;
	}

	i = 0;
	for (i = 0; i < 20; i++) {
		printf("%d%c", MyTab1[i], SEPARATEUR);
	}
	int* MyPtr1=&MyTab1[19];

	printf("\n");

	while (*MyPtr1 > 0) {
		printf("%d%c", *MyPtr1, SEPARATEUR);
		MyPtr1--;
	}
	return(EXIT_SUCCESS);
}