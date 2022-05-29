#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *link;
};
 void create_prefered_node(struct node **head,struct node **pivot,int value,int pivotv)
 {
   struct node *newnode = (struct node *)malloc(sizeof(struct node));
   newnode->data = value;

   
     if(pivotv>value)
    {
        newnode->link = *head;  
        *head = newnode;
    }  
    else if(pivotv<value)
    {
        struct node *p = *head;
        while(p->link!=NULL)
        {
            p = p->link;
        }
        p->link = newnode;
        newnode->link = NULL;
    }
}
  
 
 void  display(struct node **head)
 {
         struct node *p = *head;
         while(p!=NULL)
         {
              printf("%d ",p->data);
              p = p->link;
         }
     
 }
int main()
{
    int pivotv,choice,value;
    struct node *head;
    struct node *pivot  =(struct node *)malloc(sizeof(struct node));
    printf("Enter the pivot element = ");
    scanf("%d",&pivotv);
    pivot->data = pivotv;
    pivot->link = NULL;
    head = pivot;
    printf("\n\n1.Create prefer list\n2.sisplay\n3.exit\n\n");
    
    while (1)
    {
        printf("\n\nEnter the choice  : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value = ");
            scanf("%d",&value);
            create_prefered_node(&head,&pivot,value,pivotv);
            break;

        case 2:
         display(&head);
            break;
        case 3:
            exit(0);
        }

    }
    
    return 0;
}