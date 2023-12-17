#include<iostream>
#include<deque>

using namespace std;

class deque{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    deque(int size)
    {
        arr=new int[size];
        this->size=size;
        front=-1;
        rear=-1;
    }

    void pushback(int val)
    {
         if(rear==size-1 && front==0  || rear==front-1)  // full ka case
        {
            cout<<"cqueue is overflow"<<endl;
            return ;
        }
        else if(rear==-1 && front==-1)
        {
            front++;
            rear++;
            arr[front]=val;
        } 
        else if(rear==size-1 && front!=0)
        {
            rear=0;
            arr[rear]=val;
        }
        else
        {
            rear++;
            arr[rear]=val;
        }
        
    }

    void pushfront(int val)
    {
        if(rear==-1 && front==-1)
        {
            rear++;
            front++;
            arr[front]=val;
        }
        else if(front==0)
        {
            cout<<"overflow"<<endl;
        }
        else if(front==0 && rear!=size-1)
        {
            front=size-1;
            arr[front]=val;
        }
        else
        {
            front--;
            arr[front]=val;
        }
    }

    void popfront()
    {
       if(rear==-1 && front==-1)
        {
            cout<<"cqueue underflow"<<endl;
            return;
        }
        else if(front==rear)
        {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front==size-1)
        {
            
            arr[front]=-1;
            front=0;

        }
        else
        {
            arr[front]=-1;
            front++;
        }
    }

    void popback()
    {
        if(rear==-1 && front==-1)
        {
            cout<<"underflow"<<endl;
        }
        else if(rear==front){
            arr[rear]=-1;
            front=-1;
            rear=-1;
        }
        else if(rear==0)
        {
            arr[rear]=-1;
            rear=size-1;
        }
        else
        {
            arr[rear]=-1;
            rear--;
        }
    }

    
}


// int main()
// {
//     deque<int>q;

//     q.push_back(10);
//     q.push_back(20);
//     q.push_front(30);


    // q.pop_back();
    // q.pop_front();
    // cout<<q.front()<<endl;
    // cout<<q.size()<<endl;


    // push  (front)
    // 1 push_back
    //2 push_front

    // pop(rear)
    // pop_frontS
    // pop_back


// }

