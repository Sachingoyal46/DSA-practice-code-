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

bool findcycle(node * head)
{
    node * slow=head;
    node * fast=head;

    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if (fast==slow)
        {
            return true;
        }
    }
    return false;

}

node * loopstartpos(node * head)
{
    node * slow=head;
    node * fast=head;

    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow)
        {
            break;
        }
    }
    

    slow=head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }

    return slow;
}

void removecycle(node * &head)
{
    node * slow=head;
    node * fast=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow)
        {
            break;
        }
    }

    if(fast==NULL)
    {
        cout<<"has cycle"<<endl;
        return;
    }
    slow=head;
    while(fast!=slow)
    {
        fast=fast->next;
        slow=slow->next;
    }

    node * startnode=slow;
    node *temp=fast;
    while(temp->next!=startnode)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}

node * reverse(node *head)
{
    node * prev=NULL;
    node * current=head;

    while(current!=NULL)
    {
       node * temp=current->next;
       current->next=prev;
       prev=current;
       current=temp; 
    }
    return prev;
}

void addnumber(node * &head)
{
    // reverse
    head=reverse(head);

    // add number
    int carry=1;
    node * temp=head;
    while(temp->next!=NULL)
    {
        int totalsum=temp->data + carry;
        int digit=totalsum%10;
         carry=totalsum/10;

        temp->data=digit;

        temp=temp->next;

         if(carry==0)
         {
            break;
         }
    
    }
// last node processing
    if(carry!=0)
    {
        int totalsum=temp->data + carry;
        int  digit=totalsum%10;
        int carry=totalsum/10;
        temp->data=digit;

        if(carry!=0)
        {
            node * newnode=new node(carry);
            temp->next=newnode;

        }


    }
    // reverse
    head=reverse(head);
}

int main()
{

    node*head=NULL;
    node *tail=NULL;

    insertattail(head,tail,9);
    insertattail(head,tail,1);
    insertattail(head,tail,9);
    // insertatposition(head,tail,90,3);
    addnumber(head);
    // tail->next=head->next->next;
    // removecycle(head);

    // deletion(head,tail,3);
    printll(head);
   
  
}

