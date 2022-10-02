#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};

int main()
{
    int n;
    scanf("%d",&n);

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
        temp=temp->next;
    }
    temp->next=NULL;
    int count;
    if(n%2==0)
    {
        count=(n+2)/2;
    }
    else
    {
        count=(n/2)+1;
    }

    temp=head;
    int k=1;
    while(k!=count)
    {
        temp=temp->next;
        k++;
    }
    printf("%d\n",temp->data);

    return 0;
}