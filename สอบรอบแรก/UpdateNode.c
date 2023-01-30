//nattapong_hongthong 65543206057_3 SEC_1
//https://youtu.be/aCbl5ClrAb8
#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};

void AddNode(struct Node **protoNode, int data) ;
void Update(struct Node **protoNode,int data, int Ndata) ;
void ShowData(struct Node *protoNode) ;

int main(){
	struct Node *start; 
	start = NULL;
	AddNode(&start,10);
	AddNode(&start,20);
	AddNode(&start,30);
	AddNode(&start,40);
	ShowData(start);
	Update(&start,10,99);
	ShowData(start);
	Update(&start,10,98);
	ShowData(start);
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
///End Addnode
void ShowData(struct Node *protoNode){
	printf("Output : ");
	
	while (protoNode != NULL){
		printf("%d ", protoNode->data);
		protoNode = protoNode->next;
	}
	printf(" \n");
}
//End ShowData

void Update(struct Node **protoNode,int data,int Ndata){
	while(*protoNode != NULL){
		if((*protoNode)->data == data){
			break;
		}
		protoNode = &(*protoNode)->next;
	}
	if((*protoNode) != NULL){
		(*protoNode)->data = Ndata ;
	}
}
//End Update