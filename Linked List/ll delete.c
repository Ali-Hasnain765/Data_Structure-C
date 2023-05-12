struct node
{
int data;
struct node *next; };
struct node *head,*temp;
DeletefromBeg()
{
struct node*temp;
temp=head;
head=head->next;
free(temp);
}
DeletefromEnd ()
{
struct node * prevnode;
temp=head;
while(temp->next!=0)
{
prevnode= temp;
temp=temp->next;
}
if(temp==head)
{ head=0
}
else
{ prevnode-> next=0;
}
free(temp);
}
DeletefromPos()
{
sruct *nextnode;
int pos,i=1;
temp=head;
printf("enter position\n");
scanf("%d",&pos);
while(i<pos-1)
{
temp=temp->next;
i++;
}
nextnode=temp->next;
temp->next=nextnode->next;
free(nextnode);
}
