#include<bits/stdc++.h>
using namespace std;
 
struct node{
    int value;
    node *next;
 };
 void init(node *&head)
 {
    head = NULL;

 }
 node* create(int x)
 {
    node *p = new node;
    p->value = x;
    p->next = NULL;
    return p;
 }
 void addHead(node *&head, int x)
 {
    node *p = create(x);
    p->next = head;
    head = p;
 }
 void addLast(node *&head, int x)
 {
    node *p = create(x);
     node *q = head;
    if(head == NULL){
        head =p;
    }
    else
    {
    // node *q = head;
    while(q->next!= NULL)
    {
      q = q->next;
    }
      q->next=p;// q tro den next ma next bang q 
    }
 }
 void outLink(node *head)
 {  
    node *p = head;
    while(p != NULL)
    {
        cout<<p->value<<endl;
        p = p->next;
    }
 }
 int main()
 {
    node *head;
    init(head);
    addHead(head,10);
    addHead(head,11);
    addLast(head,15);
    addHead(head,12);
    addLast(head,13);
    outLink(head);
    // create(x);
    return 0;
 }