# include <stdio.h>

int main() {
	// Déclarer un array contenant 3 chars {'H', 'I', '!'}
	// printf %c -> chars, %d ou %i -> entiers
	// %p -> pointeurs (adresse)
	// Afficher l'adresse mémoire de l'array et des 3 élements 
	// Comparer les adresses.

	char array[] = {'H', 'I', '!'};
	printf("Adresse de la variable array %p.\n", &array);
	printf("A l'adresse %p: %i soit le char %c.\n", &array[0], array[0], array[0]);
	printf("A l'adresse %p: %i soit le char %c.\n", &array[1], array[1], array[1]);
	printf("A l'adresse %p: %i soit le char %c.\n", &array[2], array[2], array[2]);
	printf("String array : %s.\n", array);

	char* string = "Hi!";
	printf("A l'adresse %p: %i soit le char %c.\n", &string[0], string[0], string[0]);
	printf("A l'adresse %p: %i soit le char %c.\n", &string[1], string[1], string[1]);
	printf("A l'adresse %p: %i soit le char %c.\n", &string[2], string[2], string[2]);
	printf("A l'adresse %p: %i soit le char %c.\n", &string[3], string[3], string[3]);
	printf("A l'adresse %p: %i soit le char %c.\n", &string[4], string[4], string[4]);

	char toto = 'x';
}
