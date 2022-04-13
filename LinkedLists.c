#include <stdio.h>
#include <stdlib.h>

struct node{
	int info;
	struct node* prox;
};

	typedef struct node Node;
	Node* head = NULL;
	void insertElement(Node* *head, int v);
	void printList(Node*  head);
	Node* searchElement(Node* head, int v);
	Node* searchLastElement(Node* head);

	

int main(void) {
	
	insertElement(&head, 10);
	insertElement(&head, 20);
	insertElement(&head, 30);
	
	printList(head);	
	printf("\n%d",searchElement(head,30)->info);
	printf("\n%d",searchLastElement(head)->info);
  return 0;
}

//Insere elemento
void insertElement(Node* *head, int v){
	Node* novo = (Node*) malloc(sizeof(Node));
	if(novo){
		novo->info = v;
		novo->prox = *head;
		*head = novo;
	}
}
//printa lista
void printList(Node*  head){
	Node* i;
	for(i = head; i != NULL; i = i->prox){
		printf("%d ",i->info);
	}
}
//Busca elemento
Node* searchElement(Node* head, int v){
	Node* i = head;	
	while(i){
		if(i->info == v){
			return i;
		}
		i = i->prox;
	}
	return NULL;
};
//busca ultimo
Node* searchLastElement(Node* head){
	Node* i = head;	
	while(i){
		if(i->prox == NULL){
			return i;
		}
		i = i->prox;
	}
}
