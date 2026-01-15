#include<stdio.h>
#include<stdlib.h>
// the task is to create a linklist with 4 nodes:
// define the node with struct:
typedef struct Node{
    int data;
    struct Node* link;
}node;
void printlinklist(node* head){
    node*temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->link;
    }

}
int main(){
    // create the head ->
    node* head=malloc(sizeof(node));
    if(head==NULL){
        printf("Memory allocation is failed:");
        return 1;
    }
    head->data=10;
    head->link=NULL;
    node* temp=head;

    // second link;
    node*current=malloc(sizeof(node));
    current->data=20;
    current->link=NULL;

    temp->link=current;// connecting the previous node with the current node;
    temp=temp->link;

    current=malloc(sizeof(node));
    current->data=30;
    current->link=NULL;

    temp->link=current;// linking the previous node with the current node;
    temp=temp->link;// setting the temp to current postion

     current=malloc(sizeof(node));
     current->data=40;
     current->link=NULL;

     temp->link=current;
     temp=temp->link;

     printlinklist(head);//this is a costly process; 

    free(temp);
    free(head);
    return 0;
}