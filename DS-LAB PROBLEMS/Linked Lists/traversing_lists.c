#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main(){
    struct node node1,node2,node3,*head,*temp;

    node1.data=100;
    node2.data=200;
    node3.data=300;

    node1.next=&node2;
    node2.next=&node3;
    node3.next= NULL;

    head=&node1;
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
    return 0;
}
