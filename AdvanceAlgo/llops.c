#include <stdio.h>
#include <malloc.h>

struct sllnode{
	int data;
	struct sllnode* next;
}typedef slln;

//getnode
slln* getnode(){
	slln* node = (slln*)malloc(sizeof(slln));
	return(node);
}

slln* insertBeg(slln* head, int x){
	slln* node = getnode();
	if(head == NULL){
		node->data = x;
		node->next = NULL;
	}
	else{
		node->data = x;
		node->next = head;
	}
	return(node);
}
slln* insertEnd(slln* head, int x){
	slln* node = getnode();
	if(head == NULL){
		node->data = x;
		node->next = NULL;
		return(node);
	}
	else{
		slln* prev = head;
		while(prev->next != NULL){
			prev = prev->next;
		}
		prev->next = node;
		node->data = x;
		node->next = NULL;
		return(head);
	}
}
void insert(slln* head, int y, int x){
	slln* nodeY = head;
	if(nodeY==NULL){
		printf("Empty list\n");
	}
	else{
		slln* prev = head;
		while((nodeY->data != y)&&(nodeY->next != NULL)){
			prev = nodeY;
			nodeY = nodeY->next;
		}
		if(nodeY->next==NULL){
			if(nodeY->data == y){ //last node has y
				slln* t = getnode();
				t->data = x;
				prev->next = t;
				t->next = nodeY;
			}
			else{
				printf("y not found\n");
			}	
		}
		else{
			slln* t = getnode();
			t->data = x;
			prev->next = t;
			t->next = nodeY;
		}
	}
}
void display(slln* head){
	if(head==NULL) printf("Empty\n");
	else{
		slln* node = head;
		while(node->next!=NULL){
			printf("%d ",node->data);
			node = node->next;
		}
		printf("%d \n",node->data);
	}
}
slln* evenoddorder(slln* head){
	if(head==NULL){
		printf("Empty list\n");
	}
	else{
		slln* p = head;
		slln* prev = head;
		while(p!=NULL){
			if((p->data)%2==0){
				slln* node = getnode();
				node->data = p->data;
				node->next = head;
				head = node;
				
				prev->next = p->next;
				p = p->next;
			}
			else{
				prev = p;
				p = p->next;
			}
		}
	}
	return(head);
}

int main(){
	slln* head = NULL;
	char ch = 'y';
	while(ch == 'y'){
		printf("1. Insert at begin 2. Insert at end \n3. Insert before Y 4. Display \n5. Rearrange even-odd");
		int sc, x, y;
		scanf("%d", &sc);
		switch(sc){
			case 1: //insert at beginning
				scanf("%d", &x);
				head = insertBeg(head, x); break;
			case 2: //insert at end
				scanf("%d", &x);
				head = insertEnd(head, x); break;
			case 3: //insert before Y
				printf("Enter x then y\n");
				scanf("%d", &x);

				scanf("%d", &y);
				insert(head, y, x); break;
			case 4: display(head); break;
			case 5: head = evenoddorder(head); break;
		}
		printf("Continue? ");
		scanf(" %c", &ch);
	}
	
return 0;
}
