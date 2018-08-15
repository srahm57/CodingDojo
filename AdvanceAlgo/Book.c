/*ASSIGNMENT 3: Q1. A small program that takes input from a user into a STRUCTURE, sorts it on price field and displays the table.*/
#include <stdio.h>

int i = 0;
struct book{
	char name[100];
	char author_name[50];
	int edition;
	int isbn;
 	float price;
 	char publication[50];
 	int year;
};

int takeinput(struct book *b){
	char ch;
	ch = 'y';
	while(ch =='y'){
		printf("Enter book name: ");
		scanf("%s", b[i].name);
		printf("Enter author name: ");
		scanf("%s", b[i].author_name);
		printf("Enter edition: ");
		scanf("%d", &b[i].edition);
		printf("Enter ISBN no.: ");
		scanf("%d", &b[i].isbn);
		printf("Enter price: ");
		scanf("%f", &b[i].price);
		printf("Enter publication name: ");
		scanf("%s", b[i].publication);
		printf("Enter year: ");
		scanf("%d", &b[i].year);

		i++;
		printf("Continue? (y/n): ");
		scanf(" %c", &ch); //That space before format specifier is crucial
	}
	return(i);
}

void display(struct book *b, int num_of_books){
	int j;
	printf("%20s", "Book name");
	printf("%20s", "Author name");
	printf("%10s", "Edition");
	printf("%10s", "ISBN no.");
	printf("%10s", "Price");
	printf("%20s", "Publication");
	printf("%10s", "Year \n");
	for(j=0; j<num_of_books; j++){
		printf("%20s", b[j].name);
		printf("%20s", b[j].author_name);
		printf("%10d", b[j].edition);
		printf("%10d", b[j].isbn);
		printf("%10f", b[j].price);
		printf("%20s", b[j].publication);
		printf("%10d\n", b[j].year);
	}

}

void swap(struct book *a, struct book *b){
	struct book temp = *a;
	*a = *b;
	*b = temp;
}

int partition(struct book *a, int first, int last){
	int x, y;
	float pivot;

	y = first-1;

	pivot = a[last].price;

	for(x=first; x<last; x++){
		if(a[x].price <= pivot){
			y++;//very important: writing this after swap was giving segmentation fault (lesson: it's better to sleep at 4am)
			swap(&a[y], &a[x]);
		}	
	}
	swap(&a[last], &a[y+1]);
return (y+1);
}

void quicksort(struct book *a, int first, int last){
	if(first<last){
		int part;
		part = partition(a, first, last);
		quicksort(a, first, part-1);
		quicksort(a, part+1, last);
	}	
}


int main(){
	struct book b[20];
	int choice, first, last;
	char cont = 'y';
	
	while(cont == 'y'){
		printf("\n\tEnter your choice: \n\t1. Input book details \t\t2. Display book details \n\t3. Sort w.r.t price \n");
		scanf("%d", &choice);

		switch(choice){
			case 1: i = takeinput(b); printf("\nTotal books entered: %d \n", i); break;
			case 2: display(b, i); break;
			case 3: first = 0; last = i-1; quicksort(b, first, last); printf("Sorted.\n"); break;
		}
		printf("Continue? (y/n): ");
		scanf(" %c", &cont);
	}	
return 0;
}
