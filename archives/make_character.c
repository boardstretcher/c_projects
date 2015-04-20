#include <stdio.h>
#include <stdlib.h>

void menu_name(void);
void menu_race(void);
void menu_class(void);
void menu_charinfo(void);

int selection;
char *ch_name;

int main(void){

	for (;;) {
		printf("Character Menu\n");
		printf("---------------\n");
		printf("1. Name\n");
		printf("2. Race\n");
		printf("3. Class\n");
		printf("4. Character Info\n");
		printf("5. Exit\n");
		printf("\n\nSelection: ");

		scanf("%d", &selection);

		switch(selection){
			case 1: printf("Entering Name Menu. . ."); menu_name(); break;
			case 2: printf("Entering Race Menu. . ."); menu_race(); break;
			case 3: printf("Entering Class Menu. . ."); menu_class(); break;
			case 4: printf("Entering Character Information Menu. . ."); menu_charinfo(); break;
			case 5: printf("Exiting."); exit(0); break;
			default: printf("Invalid Selection\n"); break;
		}

	}


	return 0;
}

void menu_name(void){
	printf("Name Menu\n");
	printf("Enter the name of your character: ");
	scanf("%s", ch_name);
	break;
}

void menu_race(void){
	printf("Race Menu\n");
}

void menu_class(void){
	printf("Class Menu\n");
}

void menu_charinfo(void){
	printf("Character Info......\n");
	printf("Name: %s\n", ch_name);
}
