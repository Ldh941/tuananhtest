#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    node *next;
    node *prev;
};
struct dsKep
{
    node *head;
    node *tail;
};
void addHead(dsKep &list, int x)
{
    node *p = new node;
    p->value=x;
    p->prev = NULL;
    if(list.head==NULL){
        p->next = NULL;
        list.tail=p;
    }else{
        p->next = list.head;
        list.head->prev =p;
    }
    list.head = p;
}
void addTail(dsKep &list, int x)
{
    node *p=new node;
    p ->value = x;
    p ->next = NULL;
    if(list.tail == NULL)
    {
        p -> prev = NULL;
        list.head = p;
    }
    else{
        p->prev = list.tail;
        list.tail->next = p;
    }
    list.tail=p;
}
void addAny(dsKep &list, int x, int pos){
    node *p = new node;
    p->value = x;
    if(pos == 1){
        p->prev = NULL;
        p->next = list.head;
        if(list.head != NULL){
            list.head->prev = p;
        }
        else{
            list.tail = p;
        }
        list.head = p;
    }
    else{
        node *cur = list.head;
        int count = 1;
        while(cur != NULL && count < pos){
            cur = cur->next;
            count++;
        }
        if(cur != NULL){
            p->prev = cur->prev;
            p->next = cur;
            cur->prev->next = p;
            cur->prev = p;
        }
        else{
            p->prev = list.tail;
            p->next = NULL;
            if(list.tail != NULL){
                list.tail->next = p;
            }
            else{
                list.head = p;
            }
            list.tail = p;
        }
    }
}
void outPut(dsKep list){
    node *p = list.head;
    while (p != NULL)
    {
        cout <<p -> value<<endl;
        p = p -> next;
    }
}

int main(){
    dsKep list;
    list.head == NULL;
    list.tail == NULL;
    addHead(list,3);
    addHead(list,7);
    addTail(list,9);
    addTail(list,10);
    addAny(list,17,3);
    // addHead(list,10);
    outPut(list);
}

