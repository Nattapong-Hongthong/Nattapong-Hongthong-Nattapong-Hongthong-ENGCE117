//nattapong_hongthong 65543206057_3 SEC_1
//https://youtu.be/aCbl5ClrAb8
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void AddNode(struct Node **protoNode, int data) ;
void ShowData(struct Node *protoNode);
void ShowBack(struct Node **protoNode);

int main(){
	struct Node *start;
	start = NULL;
	AddNode(&start,10);
	AddNode(&start,20);
	AddNode(&start,30);
	AddNode(&start,40);
	ShowData(start);
	ShowBack(&start);
}
//End main
void AddNode(struct Node **protoNode, int data){
	while(*protoNode != NULL){
		protoNode = &(*protoNode)->next;
	}

	*protoNode = new struct Node;
	(*protoNode)->data = data;
	(*protoNode)->next = NULL;
}
//End AddNode
void ShowData(struct Node *protoNode){
	printf("Output : ");
	
	while (protoNode != NULL){
		printf("%d ", protoNode->data);
		protoNode = protoNode->next;
	}
	printf(" \n");
}/
//End ShowData
void ShowBack(struct Node **protoNode){
	struct Node *Total = NULL ;
	struct Node *mover = *protoNode ; 
	struct Node *holder = NULL ;
	while (mover != NULL){
		holder = (mover)->next ;
		(mover)->next = Total ;
		Total = (mover) ;
		(mover) = holder ; 
	}
	ShowData(Total) ;
	*protoNode = Total ;
}
//End ShowBack