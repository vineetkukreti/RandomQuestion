#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void create_node(struct node **head,int value)
{
    struct node *temp ;/// just for reference
      
    temp = (struct node *)malloc(sizeof(struct node));
    if(*head==NULL){
    temp->data = value;
    temp->link = NULL;
    *head = temp;
    }
    struct node *p = *head;
     temp->data = value;
    while(p->link!=NULL)
    {
        p=p->link;
    }
    p->link = temp;
    
    temp->link = NULL;

}
void Display_merge(struct node *head)
{
	while(head!=NULL)
	{
		printf("%d\n",head->data);
		head=head->link;
	}
   
}
struct node *  Merge(struct node **head1,struct node **head2)
{
    struct node *p = *head1;
    struct node *q = *head2;
    struct node *t = (struct node *)malloc(sizeof(struct node));
    struct node *temp = t;
    while(p!=NULL&&q!=NULL)
    {
        if(p->data < q->data)
        {
            temp->link = p;
            p = p->link;
        }
        else if(p->data > q->data)
        {
             temp->link = q;
             q = q->link;
        }
        temp=temp->link;
    }
    while(p!=NULL)
    {
        temp->link = p;
        temp = temp->link;
        p = p->link;
    }
     while(q!=NULL)
    {
        temp->link = q;
        q = q->link;
         temp = temp->link;
    }
     return t->link;
}
int main()
{
	int choice,value;
	struct node *head1=NULL,*head2=NULL,*a;
	printf("1.Enter node linked list one\n2.Enter nodes in linked list two\n3.Merge Linked List\n4.Display\n5.display merged lise\n6.exit");
	do
	{
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
            for(int i = 0;i<3;i++){
				printf("\n\nEnter the value : ");
				scanf("%d",&value);
				create_node(&head1,value);
            }
				break;
			case 2:
                 for(int i = 0;i<3;i++){
				printf("\n\nEnter the value : ");
				scanf("%d",&value);
				create_node(&head2,value);
                 }
				break;
			case 3:
				a = Merge(&head1,&head2);
				break;
			case 4:
				Display_merge(head1);
                printf("\n");
                Display_merge(head2);
				break;
            case 5:
				Display_merge(a);
               
				break;
			case 6:
				printf("\n Exiting the program..................................\n");
		}
	}while(choice!=5);
}
