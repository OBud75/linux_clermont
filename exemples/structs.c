#include <stdio.h>

// On définit une nouvelle structure : Student
struct Student {
	int age;
	char* name;
};
// int a = 1;
// int* addresse_of_a = &a;

// On définit un nouveau type de structure : Person
typedef struct {
	int birth_year;
	char* name;
} Person;

int main() {
	struct Student new_student = {30, "toto"};
	printf("new_student name: %s, l'age est de %i.\n", new_student.name, new_student.age);
	printf("Adresse de new_student : %p.\n", &new_student);
	printf("Adresse de son age : %p.\n", &new_student.age);
	printf("Adresse de son name : %p.\n", &new_student.name);

	// On dit qu'on créé une nouvelle 'instance' de type Person
	Person new_person = {1991, "Thomas"};
	// Créer un array "people" composé de 3 objects de type "Person"
	Person people[3];
	// Initialiser directement les 'attributs' des 3 personnes:
	// {2000, "toto"}, {1990, "titi"}, {1995, "nana"}

	// Afficher les adresses mémoire de chaque personne de l'array people
}


