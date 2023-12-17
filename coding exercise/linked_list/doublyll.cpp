#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node *next;
    node* prev;

    node()
    {
        this->next=NULL;
        this->prev=NULL;
    }

    node(int data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

};

void printll(node * head)
{
    node *temp=head;
    while(temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    cout<<endl;
}

int findlength(node * head)

{
    node * temp= head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void insertathead(node * &head,node *&tail,int data)
{
    if(head==NULL)
    {
        node * newnode=new node(data);
        tail=newnode;
        head=newnode;
    }
    else{
        
        node *newnode = new node(data);
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        
    }


}

void insertattail(node *&head,node *&tail,int data)
{
     if(head==NULL)
    {
        node * newnode=new node(data);
        tail=newnode;
        head=newnode;
    }
    else
    {
        node * newnode=new node(data);
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
         
    }
}

void insertatposition(node* &head,node * &tail,int data,int position)
{
    if(head==NULL)
    {
        
        node * newnode=new node(data);
        tail=newnode;
        head=newnode;

    }
    if(position==1)
    {
        insertathead(head,tail,data);

    }
    if(position==findlength(head)+1)
    {
        insertattail(head,tail,data);
    }
    else
    {
        node * newnode=new node(data);
        node* prev=NULL;
        node * current=head;
        while(position!=1)
        {
            prev=current;
            current=current->next;
            position--;

        }
        prev->next=newnode;
        newnode->prev=prev;
        newnode->next=current;
        current->prev=newnode;
    }
}

void deletenode(node *&head,node *&tail,int position)
{
    if(head==NULL)
    {
        cout<<"can not delete the node"<<endl;
        return ;
    }

    if(head==tail)
    {
        node *temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }


    if(position==1)
    {
        node*temp=head;
        head=temp->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }
    else if(position==findlength(head)) 
    {
        node *prev=tail->prev;
        prev->next=NULL;
        tail->prev=NULL;
        delete tail;
        tail=prev;
        

    }
    else
    {
        node* prevnode=NULL;
        node *current=head;

        while(position!=1)
        {
            prevnode=current;
            current=current->next;
            position--;
        }

        node* nextnode=current->next;
        prevnode->next=nextnode;
        current->prev=NULL;
        current->next=NULL;
        nextnode->prev=prevnode;
        delete current;

    }


}





int main()
{
    node *head=NULL;
    node *tail=NULL;

    insertathead(head,tail,10);
    insertathead(head,tail,20);
    insertathead(head,tail,30);
    insertathead(head,tail,40);
    insertathead(head,tail,50);
    insertattail(head,tail,60);
    insertatposition(head,tail,70,4);
    deletenode(head,tail,2);
    deletenode(head,tail,4);
    printll(head);




}


