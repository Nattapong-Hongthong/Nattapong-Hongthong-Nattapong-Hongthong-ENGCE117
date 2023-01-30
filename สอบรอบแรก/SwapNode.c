//nattapong_hongthong 65543206057_3 SEC_1
//https://youtu.be/aCbl5ClrAb8
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void AddNode(struct Node **protoNode, int data) ;
void ShowData(struct Node *protoNode) ;
void Swap(struct Node **protoNode,int swap1,int swap2);

int main(){
	struct Node *start;
	start = NULL;/
	AddNode(&start,10);
	AddNode(&start,20);
	AddNode(&start,30);
	AddNode(&start,40);
	ShowData(start);
	Swap(&start,20,30);
	ShowData(start);
	Swap(&start,40,10);
	ShowData(start);
}
//End main
void AddNode(struct Node **protoNode, int data){
	while(*protoNode != NULL){
		protoNode = &(*protoNode)->next ;
	}

	*protoNode = new struct Node;
	(*protoNode)->data = data ;
	(*protoNode)->next = NULL ;
}
//End Addnode

void ShowData(struct Node *protoNode){
	printf("Output : ") ;
	
	while (protoNode != NULL){
		printf("%d ", protoNode->data) ;
		protoNode = protoNode->next ;
	}//end while
	printf(" \n") ;
}
//End ShowData

void Swap( struct Node **protoNode, int data, int temp ) {
	while( *protoNode != NULL) {
		if((*protoNode) -> data == data ) {
			(*protoNode) -> data = temp ;
		}
		else if((*protoNode) -> data == temp ) {
			(*protoNodek) -> data = data ;
		}
		protoNode = &(*protoNode) -> next ;
	}
}
//End Swap