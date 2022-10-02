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

    if (n==1)
    {
       printf("-1");
       return 0;
    }
    
    struct node *new_node,*head,*temp,*temp2;
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
    int count=0;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        for(temp2=temp->next;temp2!=NULL;temp2=temp2->next)
        {
            if(temp->data==temp2->data)
            {
                count++;
            }
        }
    }
    
    if(count==0)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }

    return 0;
}