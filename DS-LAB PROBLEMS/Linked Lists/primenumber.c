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
    temp->next=head;
    int num,div;
    int count;
    temp=head;
    while(temp->next!=head)
    {
        count=0;
        num=temp->data;
        for(int i=2;i<=num-1;i++)
        {
            div=num%i;
            if(div==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%d\n",temp->data);
        }
        temp=temp->next;
    }
    
    return 0;
}