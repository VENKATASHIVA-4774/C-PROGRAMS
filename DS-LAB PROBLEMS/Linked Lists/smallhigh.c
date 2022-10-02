#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{
    int n;
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);

    struct node *new_node,*head,*temp;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter the value in first node:");
    scanf("%d",&new_node->data);

    head=new_node;
    temp=new_node;

    for(int i=2;i<=n;i++)
    {
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter the value in node:");
    scanf("%d",&new_node->data);
    temp->next=new_node;
    new_node->prev=temp;
    temp=temp->next;

    }
    temp->next=NULL;
    
    temp=head;
    int high,low;
    high=temp->data;
    low=temp->data;
    while(temp!=NULL)
    {
        if(high<temp->data)
        {
            high=temp->data;
        }

        if(low>temp->data)
        {
            low=temp->data;
        }
        temp=temp->next;
    }
    int diff;
    diff= high-low;
    printf("%d",diff);

    return 0;
}