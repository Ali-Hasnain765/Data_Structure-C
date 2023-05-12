#include<stdio.h>
#include<malloc.h>
struct node {
char data;
struct node*next;
struct node *prv;
};
struct node *head,*tail;
void create ()
{
    head=0;
    struct node *newnode;
    int choice =1;
    while (choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf ("enter data :\n");
        scanf ("\n");
        scanf ("%c",&newnode->data);
        newnode -> prv = 0;
        newnode -> next = 0;
        if (head == 0)
        {
            head = tail = newnode;
        }
        else
        {
            tail -> next = newnode;
            newnode -> prv = tail;
            tail = newnode;
        }
        printf ("do you want to continoue ?press(0,1)=");
        scanf ("%d",&choice);
    }
}
    struct node *head;
    void display ()
    {
        int count = 0;
        struct node *temp;
        temp = head;
        while (temp != 0)
        {
            printf (" %c ",temp -> data);
            temp = temp -> next;
            count ++;
        }
        printf ("\nthe counted linked list are %d\n",count);
    }
    void deletefromend ()
    {
        struct node * temp;
        if (tail ==0)
        {
            printf ("list is empty\n");
        }
        else
        {
            temp = tail;
            tail -> prv -> next = 0;
            tail = tail -> prv;
            free (temp);
        }
    }
    void main ()
    {
        create ();
        display ();
        deletefromend ();
        display ();
        getch ();
    }
