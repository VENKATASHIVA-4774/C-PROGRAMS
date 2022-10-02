#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
 int main(){
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
    temp=temp->next;

    }
    temp->next=NULL;
    
    temp=head;
    int count=0,count1=0;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        if(temp->data%2==0)
        {
            count++;
        }
        if(temp->data%2!=0)
        {
            count1++;
        }
        temp=temp->next;
    }
    printf("Even:%d\n",count);
    printf("odd:%d\n",count1);

    return 0;
    
}