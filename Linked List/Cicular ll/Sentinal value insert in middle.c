#include<stdio.h>
#include<stdlib.h>
struct node{
	char data;
	struct node *link;
};
int main(){
	struct node *curr=NULL;
	struct node *head=NULL;
	head=malloc(sizeof(struct node));
	printf("Enter the sentinal value: ");
    char sentinal;
    scanf("%c",&sentinal);
    fflush(stdin);
	head->data=sentinal;
	head->link=malloc(sizeof(struct node));
	curr=head->link;
	int i;
	for(i=0;i<5;i++){
		printf("Enter the data: ");
		scanf("%c",&curr->data);
		fflush(stdin);
		curr->link=malloc(sizeof(struct node));
		if(i==4){
            curr->link=head;
		}
		curr=curr->link;
	}
	//before inserting printing
	printf("Before inserting\n");
	curr=head->link;
	printf("[%X]---->[%c]",head,head->data);
	while(1){
		if(curr->data==head->data) break;
		printf("[%X]---->[%c]",curr,curr->data);
		curr=curr->link;
	}
	printf("[%X]\n",head);
	//Inserting
	char newElement;
	struct node* newNode=malloc(sizeof(struct node));
	printf("Enter an element to insert: ");
	scanf("%c",&newElement);
	fflush(stdin);
	newNode->data=newElement;
	curr=head->link;;
	int count=1;
	while(1){
		if(count>=(4/2)){
			newNode->link=curr->link;
			curr->link=newNode;
			break;
		}
		count++;
		curr=curr->link;
	}
	//Print After inserting
	printf("Printing Aftert inserting\n");
	curr=head->link;
	printf("[%X]---->[%c]",head,head->data);
	while(1){
		if(curr->data==head->data) break;
		printf("[%X]---->[%c]",curr,curr->data);
		curr=curr->link;
	}
	printf("[%X]\n",head);
	return 0;
}
