#include <stdio.h>

int main(int argc, char **argv){
	int choice = 0;

	printf("Choice (1-New, 2-Open, 3-Save, 4-Exit):");
	scanf("%d",&choice);

	switch(choice){
		case 1: printf("Create new file\n");
		case 2: printf("Open file\n");
		case 3: printf("Save as new file\n");
		case 4: printf("Exit editor\n");
				break;
		default: printf("Invalid command:%d",choice);

	}

	return 0;
}
