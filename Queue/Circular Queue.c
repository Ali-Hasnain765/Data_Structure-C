#include<stdio.h>
void enqueue ();
void dequeue ();
void display ();
int queue[5];
int front=0;rear=-1;totalitem=0;
int main ()
{
    int ch;
      while(1)
    {
    printf("1.Enqueue 2.Dequeue 3.Display 4.Exit \n");
    printf("Enter your choice: \n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1 :
        enqueue ();
        break;
    case 2:
        dequeue ();
        break;
    case 3:
        display ();
        break;
    case 4:
        exit(0);
    default :
        printf("Enter valid choice\n");
    }
}
return 0;
}
void enqueue ()
{
    if(totalitem>=5)
    {
        printf("FULL \n");
    }
    else
    {
        int item;
        printf("Enter value: \n");
        scanf("%d",&item);
        rear=(rear+1)%5;
        queue[rear]=item;
        totalitem++;
    }
}
void dequeue ()
{
    if(totalitem<=0)
    {
        printf("EMPTY \n");
    }
    else
        printf("The popped element is %d \n",queue[front]);
    queue[front]=0;
    front=(front+1)%5;
    totalitem--;
}
void display ()
{
    int i;
    printf("The elements are :   \n");
    for(i=0;i<5;i++)
    {
        printf("%d \n",queue[i]);
    }
}
