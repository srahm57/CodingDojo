#include <stdio.h>
#include <conio.h>

struct Book{
	char * name;
	char * author_name;
	char * publication;
	int edition;
	int isbn_no;
	float price;
	int publication_year;
};

int main(void) {
	struct Book b;
	char ch = 'y';
	while(ch == 121){
		printf("Enter Book name: ");
		scanf("%s", b.name);
		printf("\n");

		printf("Enter edition: ");
		scanf("%d", &(b.edition));
		printf("\n");
		
		printf("Continue? (y/n): ");
		printf("%c", ch);
		ch = getch();
		//scanf("%c", &ch);
	}
	
	printf("Name: %s \n", b.name);
	printf("Edition: %d \n", b.edition);
	return 0;
}
