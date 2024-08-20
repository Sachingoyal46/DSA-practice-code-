// length
// print
// insert at head
// insert at tail
// insert bet head and tail
// delete at head
// delete at tail
// delete at betwwemn head and tail;


#include<iostream>
using namespace std;


class Node
{
    public:
    int data;
    Node * next;

    Node() // defalut constrctor
    {
        this->next=NULL;
    }

    Node(int data)// parametarized constructor
    {
        this->data=data;
        this->next=NULL;
    }
};

void printll(Node * head)
{
    Node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int length(Node * &head)
{
    Node * temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtHead(Node * &head,Node * &tail,int data)
{
    
    if(head==NULL)
    {
        Node * newnode=new Node(data);
        head=newnode;
        tail=newnode;
        
    }
    else
    {
        Node *newnode= new Node(data);
        newnode->next=head;
        head=newnode;
        
    }
}

void insertAtTail(Node *&head, Node *&tail,int data)
{
        if(head==NULL)
        {
            Node * newnode=new Node(data);
            head=newnode;
            tail=newnode;
        }
        else{

            

            Node * newnode=new Node(data);
            tail->next=newnode;
            tail=newnode;

            }
        
}

void insertAtPosition(Node *&head,Node *&tail, int position,int data)
{

    if(head==NULL)
    {
        Node *newnode=new Node();
        head=newnode;
        tail=newnode;
    }

    if(position==1)
    {
        insertAtHead(head,tail,data);
    }

    else if(position==length(head)+1)
    {
        insertAtTail(head,tail,data);
    }
    else
    {
        Node * prev=NULL;
        Node * curr=head;

        while(position!=1)
        {
            prev=curr;
            curr=curr->next;
            position--;
        }

        Node * newnode = new Node(data);
        prev->next=newnode;
        newnode->next=curr;
    }
    

}


void deleteatposition(Node * &head, Node* &tail, int position)
{
    if(head==NULL)
    {
        cout<<"link list is empty"<<endl;
        return;
    }
   if(head==tail)
   {
        Node * temp=head;
    delete temp;
    head=NULL;
    tail=NULL;
   }
   if(position==1)
   {
        Node *temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;

   }
   else if(position==length(head))
   {
    Node *temp=head;
    while(temp->next!=tail)
    {
        temp=temp->next;
    }
    
    temp->next=NULL;
    delete tail;
    tail=temp;
    
   }
   else
   {
    Node * curr=head;
    Node * prev=NULL;
    while(position!=1)
    {
        prev=curr;
        curr=curr->next;
        position--;
    }
    Node * temp=curr->next;

    prev->next=temp;
    curr->next=NULL;
    delete curr;
   }



}
int main()
{

 Node * head=NULL;
 Node * tail=NULL;

insertAtHead(head,tail,10);
insertAtHead(head,tail,20);
insertAtHead(head,tail,30);
insertAtHead(head,tail,40);
insertAtTail(head,tail,50);
insertAtPosition(head,tail,6,60);
deleteatposition(head,tail,3);

printll(head);

}