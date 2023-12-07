#include<iostream>
using namespace std;


class node{

    public:
    int data;
    node *next;

    node(){// default constructor
        this->next=NULL;
    }

    node(int data)// paramaterised constructor
    {
        this->data=data;
        this->next=NULL;
    }


};

void printll(node * head)
{
    node * temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

void lenght(node* head)
{
    node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        count++;
        temp=temp->next;
    }
    cout<<endl;
    cout<<"lenght of the ll is "<<count<<endl;
}

void insertathead(node *&head,node *&tail,int data)
{
    if(head==NULL)
    {
        node * newnode=new node(data);
        head=newnode;
        tail=newnode;
    }
    else
    {
        node *newnode=new node(data);
        newnode->next=head;
        head=newnode;
    }

}


int main()
{
    node *first=new node(1);
    node *second=new node(2);
    node *third=new node(4);
    node *four=new node(5);
    node *fifth=new node(6);

    first->next=second;
    second->next=third;
    third->next=four;
    four->next=fifth;

    node *head=first;

    insertathead(head,tail,8);
    printll(head);
    lenght(head);
}

