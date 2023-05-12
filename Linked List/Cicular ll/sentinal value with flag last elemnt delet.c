#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	int flag;
	struct node *link;
};
int main(){
	struct node *curr=NULL;
	struct node *head=NULL;
	printf("Enter the data of first node: ");
	head=malloc(sizeof(struct node));
	head->flag=1;
	scanf("%d",&head->data);
	head->link=malloc(sizeof(struct node));
	curr=head->link;
	while(1){
		printf("Enter the data {0 to End}: ");
		scanf("%d",&curr->data);
		curr->flag=0;
		if(curr->data == 0){
			curr->link=head;
			break;
		}
		curr->link=malloc(sizeof(struct node));
		curr=curr->link;
	}
	curr=head->link;
	printf("%d\n",head->data);
	while(1){
		if(curr->flag==1) break;
		printf("%d\n",curr->data);
		curr=curr->link;
	}
	//Deleting
	curr=head->link;;
	struct node *currPrev=head;
	while(1){
		if(curr->link->flag==1){
			currPrev->link=head;
			break;
		}
		currPrev=curr;
		curr=curr->link;
	}
	//Print Aftert Deleting
	printf("Printing Aftert Deleting\n");
	curr=head->link;
	printf("%d\n",head->data);
	while(1){
		if(curr->flag==1) break;
		printf("%d\n",curr->data);
		curr=curr->link;
	}
	return 0;
}
