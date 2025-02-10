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
	char last_name[8];
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
	// {2000, "toto"}, {1990, "un nom arrrrrrrchi long"}, {1995, "un nom tres long"}
	// Afficher les adresses mémoire de chaque personne de l'array people
 	Person* p1 = &people[0];
  
  	printf("Adresse memoire de p1 : %p\n", p1);
  	printf("Adresse memoire de p2 : %p\n", &people[1]);
  	printf("Adresse memoire de p3 : %p\n", &people[2]);
  
	// On accede à la variable depuis le pointeur : on utilise '->'
  	p1->birth_year = 2000;
	// On accède à la variable depuis la structure (on parle de référence) : on utilise '.'
  	people[0].name = "toto";

  	people[1].birth_year = 1990;
  	people[1].name = "un nom arrrrrrchi long";

	people[2].name = "un nom tres long";
	people[2].birth_year = 1995;

  	people[0].last_name[0] = 'D';
  	people[0].last_name[1] = 'o';
  	people[0].last_name[2] = 'e';
  	people[0].last_name[3] = '\0';

	// String copy copie la string dans un array de chars au lieu d'assigner les chars 1 par 1
	strcpy(people[1].last_name, "Un nom trop long");
	// people[1].last_name est trop long pour rentrer sur 8 bytes
	// Cela override ce qu'il y a apres en mémoire, en l'occurence people[2].birth_year
	// On peut vérifier ca en interprétant people[2].birth_year comme si c'était un char 
	printf("%c\n", people[2].birth_year);
	// On se retrouve avec le 9ieme char de people[1].name : 'r'

	// On décide d'interpréter people[2].birth_year comme un pointeur vers un char
  	char* end_of_name = people[2].birth_year;
  	printf("%s\n", &end_of_name);
	// On se retrouve avec 'rop' : le compilateur lit les chars jusqu'a tomber sur un 0
	// C'est un ordinateur : il fait ce qu'on lui demande, sans savoir pourquoi !

  	printf("Adresse memoire de p1.birth_year : %p\n", &p1->birth_year);
  	printf("Adresse memoire de p1.name : %p\n", p1->name);
  	people[0].name = "totoooooooooooooooooooooooooooooooo";
  	printf("Adresse memoire de p1.name : %p\n", p1->name);
  	printf("Adresse memoire de p1.last_name : %p\n", p1->last_name);
  	printf("Adresse memoire de p2.birth_year : %p\n", &people[1].birth_year);
  	printf("Adresse memoire de p2.name : %p\n", people[1].name);
  	printf("Adresse memoire de p2.last_name : %p\n", people[1].last_name);

	return 0;
}

