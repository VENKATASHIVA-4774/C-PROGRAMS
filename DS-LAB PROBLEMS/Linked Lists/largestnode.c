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
    scanf("%d",&n);

    if (n==0||n==1||n==2)
    {
       printf("0");
       return 0;
    }
    
    struct node *new_node,*head,*temp;
    new_node=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new_node->data);

    head=new_node;
    temp=new_node;

    for(int i=2;i<=n;i++)
    {
    new_node=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new_node->data);
    temp->next=new_node;
    new_node->prev=temp;
    temp=temp->next;

    }
    temp->next=NULL;
    
    temp=head;
    int high;
    
    for(int k=0;k<3;k++)
    {
    temp=head;
    high=temp->data;
    while(temp!=NULL)
    {
        if(high<temp->data)
        {
            high=temp->data;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=NULL)
    {
        if(high==temp->data)
        {
            temp->data=-100;
        }
        temp=temp->next;
    }
}
    printf("%d",high);
    return 0;
}