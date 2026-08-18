#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node*head=null;
struct node*createnode(int data)
{
struct node*newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=null;return 
newnode;
}
void insertatbeginning(int data){
struct node*newnode=createnode(data);
newnode->next=head;
head=newnode;
}
void insertatend(int data)
{
struct node*newnode=createnode(data);
if(head==null){
head=newnode;
return;
}

