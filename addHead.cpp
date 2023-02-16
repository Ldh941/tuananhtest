#include <iostream>
using namespace std;
struct node
{
    /* data */
    int data;
    node *next;
};
typedef node *List;
void create(List &l) // tao danh sach
{
    l = NULL;
}
void duyetList( List l) //duyet cac phan tu trong nut
{
    List p = l;
    while(p!= NULL)
    {
        cout<< p->data<<endl;
        p=p->next;
    }
}
void addFirst(List &l, int x) // them x vao dau danh sach
{
    node *q = new node; // cap phat bo nho
    q -> data = x; // q(truyen data = x)
    q -> next = l;// q tro den dia chi tiep theo
    l = q; // gan l = q
}
main (){
    List l1;
    create(l1);
    addFirst(l1, 3);
    addFirst(l1, 5);
    addFirst(l1, 6);
    addFirst(l1, 7);
    duyetList(l1);

}