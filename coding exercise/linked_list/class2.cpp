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

int lenght(node* head)
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
   return count;
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

void insertattail(node* &head,node*&tail,int data)
{
    if(head==NULL)// empty ll
    {

        node * temp=new node(data); // single noe hai head or tail same hoga
        head=temp;
        tail=temp;


    }

    else{  // non empty ll
        node *temp=new node(data);
        tail->next=temp;
        tail=temp;
    }
}

void createTail(node *&head,node *&tail )

{
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;


    }
    tail=temp;
}

void insertatposition(node*& head,node *&tail, int data,int position)
{
   
    int length=lenght(head);
    if(position==1)
    {
        insertathead(head,tail,data);
    }
    else if(position== length+1)
    {
        insertattail(head,tail,data);
    }
    else{
        node * temp=new node(data);
        node *current=head;
        node*prev=NULL;
        while(position!=1)
        {
            // prev++;
            prev=current;
            current=current->next;
            position--;
        }
        prev->next=temp;
        temp->next=current;
    }
}

void deletion(node*& head,node*&tail,int position)
{
    if(head==NULL)
    {
        cout<<"can not delete, coz ll is empty"<<endl;
        return ;
    }

    if(head==tail)// single elemnts
    {
        node *temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
    }
    if(position==1)
    {
        // first node ko delte kar do
        node *temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;

    }
    else if(position==lenght(head))
    {
        // last node ko delte kar do
        
        node *prev=head;
        while(prev->next!=tail)
        {
            prev=prev->next;
        }
        prev->next=NULL;
        delete tail;
        tail=prev;

    }
    else{
        //middlw wali ko delte kar do
       
        node* prev=NULL;
        node *current=head;

        while(position!=1)
        {
            prev=current;
            current=current->next;
            position--;
        }
        prev->next=current->next;
        current->next=NULL;
        delete current;


    }
}


int main()
{

    node*head=NULL;
    node *tail=NULL;

    insertathead(head,tail,10);
    insertathead(head,tail,20);
    insertattail(head,tail,30);
    insertatposition(head,tail,90,3);
    deletion(head,tail,3);
     
    printll(head);


    // node *first=new node(1);
    // node *second=new node(2);
    // node *third=new node(4);
    // node *four=new node(5);
    // node *fifth=new node(6);
    // node *tail=fifth;

    // first->next=second;
    // second->next=third;
    // third->next=four;
    // four->next=fifth;

    // node *head=first;

    // insertathead(head,tail,10);
    // insertattail(head,tail,40);
    // printll(head);
    // lenght(head);
}

