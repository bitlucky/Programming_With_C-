#include <iostream>
#include <conio>
using namespace std;

struct node {
    int data;
    node *link;
}

// insertion at the beginning
void insert_beg(struct node *tmp)
{
if(start== NULL)
cout<<"List is empty";

else {
tmp=(struct node*)malloc(sizeof(struct node));
tmp->data=10;
tmp->link=NULL;
start=tmp;
}
}


//insertion at the any nth position
void insert_n(struct node *tmp , *p)
{
    if(start!==NULL)
{

    tmp=(struct node*)malloc(sizeof(struct node));
    p=start;
    for(i=1; i<pos-1; i++)
        {
            p=p->link;
            tmp->link=p->link;
            p->link= tmp;
        }
}
}

//insertion at the end
void insertion_end( struct node *tmp , *p)
{
    if(start!==NULL)
{

    tmp=(struct node *)malloc(sizeof(struct node));
    p=start;
    while(p!=NULL)
    {
        p=p->link;
    }
    p->link=tmp->link;
    tmp->link=NULL;
}

}

//traversing the linked list
void traverse(struct node *p)
{
    p=start;
while(p->link)
{
    p=p->link;
    cout<<p->info;
    cout<<p->link;
}
}


